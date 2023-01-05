<?php

/**
 * @file
 * Theme settings form for OpenChurch Theme theme.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function openchurch_theme_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['custom_colors'] = [
    '#type' => 'details',
    '#title' => t('Customize Colors'),
    '#open' => TRUE,
  ];

  $form['custom_colors']['link_color'] = [
    '#type' => 'textfield',
    '#title' => t('Link color'),
    '#default_value' => theme_get_setting('link_color'),
    '#size' => 10,
    '#description' => t('The default link color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('link_color') . '; color: white;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['nav_active_color'] = [
    '#type' => 'textfield',
    '#title' => t('Nav active color'),
    '#default_value' => theme_get_setting('nav_active_color'),
    '#size' => 10,
    '#description' => t('The active link color in the navigation.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('nav_active_color') . ';',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['button_color'] = [
    '#type' => 'textfield',
    '#title' => t('Button color'),
    '#default_value' => theme_get_setting('button_color'),
    '#size' => 10,
    '#description' => t('The default button color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('button_color') . '; color: white;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['button_border'] = [
    '#type' => 'textfield',
    '#title' => t('Button border'),
    '#default_value' => theme_get_setting('button_border'),
    '#size' => 10,
    '#description' => t('The default button border color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('button_border') . '; color: black;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['button_hover'] = [
    '#type' => 'textfield',
    '#title' => t('Button hover'),
    '#default_value' => theme_get_setting('button_hover'),
    '#size' => 10,
    '#description' => t('The default button hover color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('button_hover') . '; color: white;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['button_hover_border'] = [
    '#type' => 'textfield',
    '#title' => t('Button hover border'),
    '#default_value' => theme_get_setting('button_hover_border'),
    '#size' => 10,
    '#description' => t('The default button hover border color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('button_hover_border') . '; color: black;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['bg_dark_color'] = [
    '#type' => 'textfield',
    '#title' => t('Dark background color'),
    '#default_value' => theme_get_setting('bg_dark_color'),
    '#size' => 10,
    '#description' => t('The default dark background color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('bg_dark_color') . '; color: white;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['bg_secondary_color'] = [
    '#type' => 'textfield',
    '#title' => t('Secondary background color'),
    '#default_value' => theme_get_setting('bg_secondary_color'),
    '#size' => 10,
    '#description' => t('The default secondary background color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('bg_secondary_color') . '; color: white;',
    ],
    '#required' => TRUE,
  ];

  $form['custom_colors']['dropdown_active_color'] = [
    '#type' => 'textfield',
    '#title' => t('Dropdown active background color'),
    '#default_value' => theme_get_setting('dropdown_active_color'),
    '#size' => 10,
    '#description' => t('The color you see for the active item in dropdowns in the main nav.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('dropdown_active_color') . '; color: white;',
    ],
    '#required' => TRUE,
  ];

  $form['cdn_settings'] = [
    '#type' => 'details',
    '#title' => t('Bootstrap CDN Settings'),
    '#open' => FALSE,
  ];

  $form['cdn_settings']['bootstrap_css'] = [
    '#type' => 'textfield',
    '#title' => t('Bootstrap CSS CDN'),
    '#default_value' => theme_get_setting('bootstrap_css'),
    '#description' => t('Bootstrap CSS CDN URL.'),
    '#required' => TRUE,
  ];

  $form['cdn_settings']['bootstrap_js'] = [
    '#type' => 'textfield',
    '#title' => t('Bootstrap JS CDN'),
    '#default_value' => theme_get_setting('bootstrap_js'),
    '#description' => t('Bootstrap JS CDN URL.'),
    '#required' => TRUE,
  ];

  $form['cdn_settings']['popper_js'] = [
    '#type' => 'textfield',
    '#title' => t('Bootstrap Popper JS CDN'),
    '#default_value' => theme_get_setting('popper_js'),
    '#description' => t('Bootstrap Popper JS CDN URL.'),
    '#required' => TRUE,
  ];

  $form['cdn_settings']['icons_css'] = [
    '#type' => 'textfield',
    '#title' => t('Bootstrap Icons CSS CDN'),
    '#default_value' => theme_get_setting('icons_css'),
    '#description' => t('Bootstrap Icons CSS CDN URL.'),
    '#required' => TRUE,
  ];

  $form['path_settings'] = [
    '#type' => 'details',
    '#title' => t('Path Settings'),
    '#open' => FALSE,
  ];

  $form['path_settings']['blog_page_path'] = [
    '#type' => 'textfield',
    '#title' => t('Blog page path'),
    '#default_value' => theme_get_setting('blog_page_path'),
    '#size' => 10,
    '#description' => t('Default page path for article landing page.'),
    '#required' => TRUE,
  ];

  $form['path_settings']['events_page_path'] = [
    '#type' => 'textfield',
    '#title' => t('Events page path'),
    '#default_value' => theme_get_setting('events_page_path'),
    '#size' => 10,
    '#description' => t('Default page path for events landing page.'),
    '#required' => TRUE,
  ];

  $form['footer_content'] = [
    '#type' => 'details',
    '#title' => t('Footer Content'),
    '#open' => FALSE,
  ];

  for ($c = 1; $c <= 3; $c++) {
    $footer_setting = theme_get_setting('footer_col' . $c);
    $form['footer_content']['footer_col' . $c] = [
      '#type' => 'text_format',
      '#title' => t('Footer Column #' . $c),
      '#rows' => 2,
      '#default_value' => $footer_setting['value'],
      '#format' => $footer_setting['format'],
      '#description' => t('Set content for footer column (leave blank to hide).'),
    ];
  }

  $form['footer_content']['connect'] = [
    '#type' => 'details',
    '#title' => t('Footer Column #4 (Connect)'),
    '#open' => TRUE,
  ];

  // Show Connect column.
  $form['footer_content']['connect']['footer_connect'] = [
    '#type' => 'checkbox',
    '#title' => t('Show Social column?'),
    '#default_value' => theme_get_setting('footer_connect'),
    '#description' => t('Show "Connect" column in footer.'),
  ];

  $form['footer_content']['connect']['footer_facebook'] = [
    '#type' => 'textfield',
    '#title' => t('Facebook URL'),
    '#default_value' => theme_get_setting('footer_facebook'),
    '#description' => t('Facebook URL.'),
  ];

  $form['footer_content']['connect']['footer_twitter'] = [
    '#type' => 'textfield',
    '#title' => t('Twitter URL'),
    '#default_value' => theme_get_setting('footer_twitter'),
    '#description' => t('Twitter URL.'),
  ];

  $form['footer_content']['connect']['footer_youtube'] = [
    '#type' => 'textfield',
    '#title' => t('YouTube URL'),
    '#default_value' => theme_get_setting('footer_youtube'),
    '#description' => t('YouTube URL.'),
  ];

  $form['footer_content']['connect']['footer_instagram'] = [
    '#type' => 'textfield',
    '#title' => t('Instagram URL'),
    '#default_value' => theme_get_setting('footer_instagram'),
    '#description' => t('Instagram URL.'),
  ];

}
