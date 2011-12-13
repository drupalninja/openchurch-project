<?php
/**
 * @file
 * openchurch_defaults.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-all-sitewide';
  $context->description = 'Global context';
  $context->tag = 'global';
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
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-openchurch_latest_podcast-block' => array(
          'module' => 'views',
          'delta' => 'openchurch_latest_podcast-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-794f38e8ce669fc0643cfeb6da701af6' => array(
          'module' => 'views',
          'delta' => '794f38e8ce669fc0643cfeb6da701af6',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global context');
  t('global');
  $export['openchurch-all-sitewide'] = $context;

  return $export;
}
