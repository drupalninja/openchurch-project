<?php
/**
 * @file
 * openchurch_social.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_social_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-social';
  $context->description = 'Social icons';
  $context->tag = 'social';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'sidebar_second',
          'weight' => '100',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Social icons');
  t('social');
  $export['openchurch-social'] = $context;

  return $export;
}
