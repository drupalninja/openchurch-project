<?php

/**
 * @file
 * Contains \Drupal\openchurch_event\Controller\OpenChurchEvent.
 */

namespace Drupal\openchurch_event\Controller;

use Drupal\Core\Controller\ControllerBase;
use Drupal\Core\Datetime\DateFormatter;

define('OC_30_DAYS_UNIX', 2592000000);

/**
 * Controller routines for Event calendar routes.
 */
class OpenChurchEvent extends ControllerBase {

  /**
   * Renders the calendar page.
   */
  public function calendar() {
    $build = array();
    $build['content'] = array(
      '#markup' => '<div id="calendar"></div>',
    );
    // Attach library containing css and js files.
    $build['#attached']['library'][] = 'openchurch_event/openchurch_event.fullcalendar';
    return $build;
  }

  /**
   * Renders events json for fullCalendar.
   */
  public function json() {
    global $base_url;
    header('Content-Type: application/json');

    // Get 100 events starting 30 days before today.
    $result = db_query('SELECT n.nid FROM {node} n
      JOIN {node_field_data} nd ON nd.vid = n.vid
      JOIN {node__field_dates} d ON n.nid = d.entity_id AND d.bundle = :bundle
      WHERE d.delta = 0 AND n.type = :type AND d.field_dates_value >= :date
      AND nd.status = 1 LIMIT 100',
      array(':type' => 'event', ':date' => REQUEST_TIME - OC_30_DAYS_UNIX, ':bundle' => 'event'));

    $json = array();

    while ($row = $result->fetchObject()) {
      $node = node_load($row->nid);
      $values = $node->field_dates->getValue();

      // Convert to local time from UTC.
      $start = format_date(strtotime($values[0]['value'] . ' UTC'), '', 'Y-m-d\TH:i:s');
      $end = !empty($values[1]['value']) ? format_date(strtotime($values[1]['value'] . ' UTC'), '', 'Y-m-d\TH:i:s') : $start;

      $json[] = array(
        'title' => $node->title->value,
        'id' => $row->nid,
        'url' => $base_url . '/node/' . $row->nid,
        'start' => $start,
        'end' => $end,
      );
    }

    print json_encode($json);
    exit();
  }
}
