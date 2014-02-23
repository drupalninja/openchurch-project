<?php
/**
 * @file
 * openchurch_ministry.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function openchurch_ministry_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'openchurch_ministry_intro';
  $content->admin_title = 'Connect With Ministries Intro';
  $content->admin_description = 'Introduction text to ministries page.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Boldly Announce Your Ministries',
    'body' => '<p>Open Church is a platform to help you spread the word about your ministries and the ongoing efforts to make a difference. We would use this area to tell others about the overall mission of your church and how and where your ministries are headed.</p><p>Spread the word through the use of the internet where you can keep everyone informed of all the activities, needs, and events. Now with open church you don\'t have to have a full time web staff to spread the word, you can start for free, and the add features as you grow. If your church grows to a point you want more customization or features we\'re here to help either directly or by connecting you with one of our approved partners.</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 0,
  );
  $export['openchurch_ministry_intro'] = $content;

  return $export;
}
