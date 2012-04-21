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

  $context = new stdClass();
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
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
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
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'footer',
          'weight' => '-8',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'menu-menu-secondary-links' => array(
          'module' => 'menu',
          'delta' => 'menu-secondary-links',
          'region' => 'footer',
          'weight' => '-6',
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
