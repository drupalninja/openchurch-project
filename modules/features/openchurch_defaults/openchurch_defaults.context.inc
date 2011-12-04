<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function openchurch_defaults_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-all-sitewide';
  $context->description = 'Global context.';
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
        'openchurch_block-sidebar_block_rt1' => array(
          'module' => 'openchurch_block',
          'delta' => 'sidebar_block_rt1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-2f0b8c3051cf70fc0070adce0aa40ff8' => array(
          'module' => 'views',
          'delta' => '2f0b8c3051cf70fc0070adce0aa40ff8',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-794f38e8ce669fc0643cfeb6da701af6' => array(
          'module' => 'views',
          'delta' => '794f38e8ce669fc0643cfeb6da701af6',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'openchurch_block-sidebar_block_rt2' => array(
          'module' => 'openchurch_block',
          'delta' => 'sidebar_block_rt2',
          'region' => 'sidebar_last',
          'weight' => 3,
        ),
        'openchurch_block-global_bottom_block1' => array(
          'module' => 'openchurch_block',
          'delta' => 'global_bottom_block1',
          'region' => 'footer',
          'weight' => 0,
        ),
        'openchurch_block-global_bottom_block2' => array(
          'module' => 'openchurch_block',
          'delta' => 'global_bottom_block2',
          'region' => 'footer',
          'weight' => 1,
        ),
        'openchurch_block-global_bottom_block3' => array(
          'module' => 'openchurch_block',
          'delta' => 'global_bottom_block3',
          'region' => 'footer',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global context.');
  t('global');

  $export['openchurch-all-sitewide'] = $context;
  return $export;
}
