<?php

/**
 * @file
 * Theme settings form for OpenChurch Theme theme.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function openchurch_theme_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['openchurch_theme'] = [
    '#type' => 'details',
    '#title' => t('OpenChurch Theme'),
    '#open' => TRUE,
  ];

  $form['openchurch_theme']['font_size'] = [
    '#type' => 'number',
    '#title' => t('Font size'),
    '#min' => 12,
    '#max' => 18,
    '#default_value' => theme_get_setting('font_size'),
  ];

}
