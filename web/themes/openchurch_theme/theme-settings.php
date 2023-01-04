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

  $form['openchurch_theme']['link_color'] = [
    '#type' => 'textfield',
    '#title' => t('Link color'),
    '#default_value' => theme_get_setting('link_color'),
    '#size' => 10,
    '#description' => t('The default link color.'),
  ];

  $form['openchurch_theme']['nav_active_color'] = [
    '#type' => 'textfield',
    '#title' => t('Nav active color'),
    '#default_value' => theme_get_setting('nav_active_color'),
    '#size' => 10,
    '#description' => t('The active link color in the navigation.'),
  ];

  $form['openchurch_theme']['button_color'] = [
    '#type' => 'textfield',
    '#title' => t('Button color'),
    '#default_value' => theme_get_setting('button_color'),
    '#size' => 10,
    '#description' => t('The default button color.'),
  ];

  $form['openchurch_theme']['button_border'] = [
    '#type' => 'textfield',
    '#title' => t('Button border'),
    '#default_value' => theme_get_setting('button_border'),
    '#size' => 10,
    '#description' => t('The default button border color.'),
  ];

  $form['openchurch_theme']['button_hover'] = [
    '#type' => 'textfield',
    '#title' => t('Button hover'),
    '#default_value' => theme_get_setting('button_hover'),
    '#size' => 10,
    '#description' => t('The default button hover color.'),
  ];

  $form['openchurch_theme']['button_hover_border'] = [
    '#type' => 'textfield',
    '#title' => t('Button hover border'),
    '#default_value' => theme_get_setting('button_hover_border'),
    '#size' => 10,
    '#description' => t('The default button hover border color.'),
  ];

  $form['openchurch_theme']['bg_dark_color'] = [
    '#type' => 'textfield',
    '#title' => t('Dark background color'),
    '#default_value' => theme_get_setting('bg_dark_color'),
    '#size' => 10,
    '#description' => t('The default dark background color.'),
  ];

  $form['openchurch_theme']['bg_secondary_color'] = [
    '#type' => 'textfield',
    '#title' => t('Secondary background color'),
    '#default_value' => theme_get_setting('bg_secondary_color'),
    '#size' => 10,
    '#description' => t('The default secondary background color.'),
  ];

}
