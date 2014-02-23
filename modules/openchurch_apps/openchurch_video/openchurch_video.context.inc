<?php
/**
 * @file
 * openchurch_video.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_video_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-video-breadcrumbs';
  $context->description = 'OpenChurch Video Breadcrumbs';
  $context->tag = 'breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'openchurch_video' => 'openchurch_video',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'media/video',
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenChurch Video Breadcrumbs');
  t('breadcrumbs');
  $export['openchurch-video-breadcrumbs'] = $context;

  return $export;
}
