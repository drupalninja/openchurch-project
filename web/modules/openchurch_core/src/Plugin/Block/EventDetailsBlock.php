<?php

namespace Drupal\openchurch_core\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Url;

/**
 * Provides an event details block.
 *
 * @Block(
 *   id = "openchurch_core_event_details",
 *   admin_label = @Translation("Event Details"),
 *   category = @Translation("OpenChurch")
 * )
 */
class EventDetailsBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function build() {
    $node = \Drupal::routeMatch()->getParameter('node');

    if ($node->getType() != 'event') {
      return;
    }

    $time = $formatted_date = $link = '';

    // Format the date and time.
    if (!empty($node->get('field_date')->value)) {
      $date_value = $node->get('field_date')->value;
      $date = date_create($date_value);
      $formatted_date = date_format($date, "d F Y");
      $time = date_format($date, "h:i A");
    }

    if (!empty($node->get('field_link')->uri)) {
      $uri = $node->get('field_link')->uri;
      $link = Url::fromUri($uri)->toString();
    }

    $build = [
      '#theme' => 'openchurch_core_event_details',
      '#date' => $formatted_date,
      '#time' => $time,
      '#location' => $node->get('field_location')->value,
      '#link' => $link
    ];

    $build['#cache']['max-age'] = 0;

    return $build;
  }

}
