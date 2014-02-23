<?php
/**
 * @file
 * openchurch_bulletin.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function openchurch_bulletin_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'openchurch_bulletins_intro';
  $content->admin_title = 'Weekly Bulletins Intro';
  $content->admin_description = 'Introduction to the bulletins page.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>OpenChurch creates weekly bulletins to keep everyone informed about the inner workings of our church. Here you will find an archive of bulletins as a resource if you need it. If you would like a bulletin not found here please contact the church office.</p><h3 class="title">Bulletin Archives</h3>',
    'format' => 'panopoly_wysiwyg_text',
    'substitute' => 0,
  );
  $export['openchurch_bulletins_intro'] = $content;

  return $export;
}
