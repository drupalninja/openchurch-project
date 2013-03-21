<?php
/**
 * @file
 * openchurch_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-event-calendar-breadcrumbs';
  $context->description = 'OpenChurch Event Calendar Breadcrumbs';
  $context->tag = 'breadcrumbs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/calendar*' => 'events/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'events',
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenChurch Event Calendar Breadcrumbs');
  t('breadcrumbs');
  $export['openchurch-event-calendar-breadcrumbs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-events-breadcrumbs';
  $context->description = 'OpenChurch Events Breadcrumbs';
  $context->tag = 'breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'openchurch_event' => 'openchurch_event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'events',
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenChurch Events Breadcrumbs');
  t('breadcrumbs');
  $export['openchurch-events-breadcrumbs'] = $context;

  return $export;
}
