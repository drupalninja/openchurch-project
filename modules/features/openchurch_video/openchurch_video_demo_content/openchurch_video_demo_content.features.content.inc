<?php
/**
 * @file
 * openchurch_video_demo_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_video_demo_content_content_defaults() {
  $content = array();

  $content['oc_video1'] = (object) array(
    'exported_path' => 'media/video/introducing-drupal-7',
    'title' => 'Introducing Drupal 7',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_video',
    'language' => 'und',
    'created' => '1334532163',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_video1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Want to know more about Drupal? Watch this video to find out more.</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Want to know more about Drupal? Watch this video to find out more.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_oc_video' => array(
      'und' => array(
        0 => array(
          'fid' => db_query('SELECT fid FROM {file_managed} WHERE uri = :uri', array(':uri' => 'vimeo://v/18352872'))->fetchColumn(),
          'title' => NULL,
          'data' => NULL,
          'display' => 1,
        ),
      ),
    ),
  );

  $content['oc_video2'] = (object) array(
    'exported_path' => 'media/video/what-drupal',
    'title' => 'What is Drupal?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_video',
    'language' => 'und',
    'created' => '1334532166',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_video2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Drupal is a cutting edge, open source web development platform, designed to grow with the expanding needs of your business. Drupal\'s modular CMS system can be effectively adapted and scaled to manage your web presence, irrespective of its complexity. Drupal has been widely used to develop some of the world\'s leading online portals, including those of Harvard, MIT and the Economist.</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Drupal is a cutting edge, open source web development platform, designed to grow with the expanding needs of your business. Drupal\'s modular CMS system can be effectively adapted and scaled to manage your web presence, irrespective of its complexity. Drupal has been widely used to develop some of the world\'s leading online portals, including those of Harvard, MIT and the Economist.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_oc_video' => array(
      'und' => array(
        0 => array(
          'fid' => db_query('SELECT fid FROM {file_managed} WHERE uri = :uri', array(':uri' => 'youtube://v/26_OZeBmpXs'))->fetchColumn(),
          'title' => NULL,
          'data' => NULL,
          'display' => 1,
        ),
      ),
    ),
  );

return $content;
}