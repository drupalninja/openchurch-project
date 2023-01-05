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
  ];

  $form['custom_colors']['button_border'] = [
    '#type' => 'textfield',
    '#title' => t('Button border'),
    '#default_value' => theme_get_setting('button_border'),
    '#size' => 10,
    '#description' => t('The default button border color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('button_border') . '; color: white;',
    ],
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
  ];

  $form['custom_colors']['button_hover_border'] = [
    '#type' => 'textfield',
    '#title' => t('Button hover border'),
    '#default_value' => theme_get_setting('button_hover_border'),
    '#size' => 10,
    '#description' => t('The default button hover border color.'),
    '#attributes' => [
      'style' => 'background-color: ' . theme_get_setting('button_hover_border') . '; color: white;',
    ],
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
  ];

  $form['path_settings'] = [
    '#type' => 'details',
    '#title' => t('Path Settings'),
    '#open' => TRUE,
  ];

  $form['path_settings']['blog_page_path'] = [
    '#type' => 'textfield',
    '#title' => t('Blog page path'),
    '#default_value' => theme_get_setting('blog_page_path'),
    '#size' => 10,
    '#description' => t('Default page path for article landing page.'),
  ];

  $form['path_settings']['events_page_path'] = [
    '#type' => 'textfield',
    '#title' => t('Events page path'),
    '#default_value' => theme_get_setting('events_page_path'),
    '#size' => 10,
    '#description' => t('Default page path for events landing page.'),
  ];

  $form['path_settings']['ministry_alias_path'] = [
    '#type' => 'textfield',
    '#title' => t('Ministry alias path'),
    '#default_value' => theme_get_setting('ministry_alias_path'),
    '#size' => 10,
    '#description' => t('Ministry pages will use this path + title.'),
  ];

  $form['path_settings']['article_alias_path'] = [
    '#type' => 'textfield',
    '#title' => t('Article alias path'),
    '#default_value' => theme_get_setting('article_alias_path'),
    '#size' => 10,
    '#description' => t('Article pages will use this path + title.'),
  ];

  $form['path_settings']['event_alias_path'] = [
    '#type' => 'textfield',
    '#title' => t('Event alias path'),
    '#default_value' => theme_get_setting('event_alias_path'),
    '#size' => 10,
    '#description' => t('Event pages will use this path + title.'),
  ];

  $form['path_settings']['sermon_alias_path'] = [
    '#type' => 'textfield',
    '#title' => t('Event alias path'),
    '#default_value' => theme_get_setting('sermon_alias_path'),
    '#size' => 10,
    '#description' => t('Sermon pages will use this path + title.'),
  ];

}
