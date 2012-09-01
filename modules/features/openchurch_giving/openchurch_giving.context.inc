<?php
/**
 * @file
 * openchurch_giving.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_giving_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-giving-breadcrumbs';
  $context->description = 'OpenChurch Giving Breadcrumbs';
  $context->tag = 'breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'openchurch_charity' => 'openchurch_charity',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'give',
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenChurch Giving Breadcrumbs');
  t('breadcrumbs');
  $export['openchurch-giving-breadcrumbs'] = $context;

  return $export;
}
