<?php
/**
 * @file
 * openchurch_simplenews.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_simplenews_context_default_contexts() {
  $delta = db_query('SELECT delta FROM {block} WHERE module = :module AND theme = :theme AND delta != 0', 
     array(':theme' => 'openchurch_theme', ':module' => 'simplenews'))->fetchColumn();
  
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-simplenews';
  $context->description = 'Simplenews user signup block';
  $context->tag = 'simplenews';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin*' => '~admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'simplenews-'.$delta => array(
          'module' => 'simplenews',
          'delta' => $delta,
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Simplenews user signup block');
  t('simplenews');
  $export['openchurch-simplenews'] = $context;

  return $export;
}
