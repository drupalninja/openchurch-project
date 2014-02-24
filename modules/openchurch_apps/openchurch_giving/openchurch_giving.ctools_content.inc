<?php
/**
 * @file
 * openchurch_giving.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function openchurch_giving_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'openchurch_giving_intro';
  $content->admin_title = 'Giving Intro';
  $content->admin_description = 'Introduction to the giving page.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>At OpenChurch we realize that many of you handle all your family finances via the internet. We are glad to announce we now have a way for you to manage your giving through our online giving platform.</p><p>By giving online you can give one time donations to specific causes or ministries, setup recurring monthly donations, and view a detailed history at any point you desire. All of your information is held strictly confidential. Even though you will have the opportunity to log in and print transaction histories at any point you prefer, our system is linked with our accounting so you will still get an end of year letter with your giving history.</p><h3 class="title">Special Needs Giving</h3><p>Occasionally, opportunities arise for our body to give to individual causes that will help our community, missions abroad, and many other causes. In addition to our standard online giving system, you may use this site to give specifically to any of the following causes:</p>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 0,
  );
  $export['openchurch_giving_intro'] = $content;

  return $export;
}
