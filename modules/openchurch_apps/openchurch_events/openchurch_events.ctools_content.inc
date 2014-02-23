<?php
/**
 * @file
 * openchurch_events.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function openchurch_events_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'openchurch_events_intro';
  $content->admin_title = 'Upcoming Events Intro';
  $content->admin_description = 'Introduction to the upcoming events page.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Welcome to the OpenChurch event page. Below you will see all events for this site with an option to filter by ministry. Some will have online registrations when required and others may just be listed if no registration is required. Please enjoy all that OpenChurch has to offer!</p>',
    'format' => 'panopoly_html_text',
    'substitute' => 0,
  );
  $export['openchurch_events_intro'] = $content;

  return $export;
}
