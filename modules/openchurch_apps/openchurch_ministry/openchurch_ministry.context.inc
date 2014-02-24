<?php
/**
 * @file
 * openchurch_ministry.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_ministry_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-ministry-breadcrumbs';
  $context->description = 'OpenChurch Ministry Breadcrumbs';
  $context->tag = 'breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'openchurch_ministry' => 'openchurch_ministry',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'ministries',
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenChurch Ministry Breadcrumbs');
  t('breadcrumbs');
  $export['openchurch-ministry-breadcrumbs'] = $context;

  return $export;
}
