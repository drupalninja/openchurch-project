<?php
/**
 * @file
 * openchurch_defaults.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openchurch_defaults_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['block-oc_block_times_bottom'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Weekly Meeting Times',
    'cache' => -1,
    'machine_name' => 'oc_block_times_bottom',
  );

  $export['bartik'] = $theme;

  // openchurch_theme
  $theme = array();

  $theme['block-oc_block_times_bottom'] = array(
    'module' => 'block',
    'theme' => 'openchurch_theme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Weekly Meeting Times',
    'cache' => -1,
    'machine_name' => 'oc_block_times_bottom',
  );

  $export['openchurch_theme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
