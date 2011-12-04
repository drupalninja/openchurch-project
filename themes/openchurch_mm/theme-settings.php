<?php
// $Id: theme-settings.php,v 1.1 2010/10/26 23:22:22 aross Exp $

// Include the definition of mix_and_match_settings().
include_once './' . drupal_get_path('theme', 'mix_and_match') . '/theme-settings.php';

/**
 * Implementation of THEMEHOOK_settings() function.
 *
 * @param $saved_settings
 *   An array of saved settings for this theme.
 * @return
 *   A form array.
 */
function openchurch_mm_settings($saved_settings) {

  /*
   * Create the form using Forms API: http://api.drupal.org/api/6
   */
  $form = array();

  // Add the base theme's settings.
  $form += mix_and_match_settings($saved_settings);

  if (!module_exists('openchurch_mix_and_match')){
    $form['mix_and_match_colors']['instructions'] = array(
      '#type' => 'markup',
      '#value' => '<p><em>Enable the OpenChurch Mix and Match module to enable custom OpenChurch presets.</em></p>',
      '#weight' => -1000
    );

    return $form;
  }

  //pull js/css from companion mix and match module
  drupal_add_js(drupal_get_path('module', 'openchurch_mix_and_match').'/js/openchurch_mm_settings.js', 'theme');
  drupal_add_css(drupal_get_path('module', 'openchurch_mix_and_match').'/css/openchurch_mm_settings.css', 'theme');

  $form['mix_and_match_colors']['openchurch_mm_color_preset'] = array(
    '#type'          => 'radios',
    '#title'         => t('OpenChurch Mix and Match Color Preset'),
    '#options'       => array(
      '' => t('Custom'),
      'blue-gray-white' => t('Blue / Gray / White') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/blue-gray-white.jpg', 'Blue / Gray / White'),
      'blue-green-white' => t('Blue / Green / White') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/blue-green-white.jpg', 'Blue / Green / White'),
      'green-black' => t('Green / Black') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/green-black.jpg', 'Green / Black'),
      'blue-white' => t('Blue / White') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/blue-white.jpg', 'Blue / White'),
      'gray-black' => t('Gray / Black') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/gray-black.jpg', 'Gray / Black'),
      'green-white' => t('Green / White') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/green-white.jpg', 'Green / White'),
      'orange-black' => t('Orange / Black') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/orange-black.jpg', 'Orange / Black'),
      'red-white' => t('Red / White') .'<br />'.theme_image(drupal_get_path('theme', 'openchurch_mm').'/images/red-white.jpg', 'Red / White'),
    ),
    '#description' => t('Select a color preset - this can be modified easily later!'),
    '#default_value' => $saved_settings['openchurch_mm_color_preset'],
    '#weight' => -999
  );

  // Return the form
  return $form;
}