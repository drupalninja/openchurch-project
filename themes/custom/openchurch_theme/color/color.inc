<?php

/**
 * @file
 * Lists available colors and color schemes for the OpenChurch theme.
 */

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header top'),
    'bottom' => t('Header bottom'),
    'bg' => t('Main background'),
    'menuitem' => t('Menu item'),
    'menuitemaccent' => t('Menu item accent'),
    'menurollovertext' => t('Menu rollover text'),
    'menurolloverborder' => t('Menu rollover border'),
    'menurolloverborderhover' => t('Menu rollover border hover'),
    'sidebar' => t('Sidebar background'),
    'sidebartitlebg' => t('Sidebar title background'),
    'sidebartitletext' => t('Sidebar title text'),
    'contentblocktitlebg' => t('Content block title background'),
    'contentblocktitletext' => t('Content block title text'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('OpenChurch (default)'),
      'colors' => array(
        'top' => '#373737',
        'bottom' => '#373637',
        'bg' => '#ffffff',
        'menuitem' => '#d6e6c2',
        'menuitemaccent' => '#d6edf5',
        'menurollovertext' => '#000000',
        'menurolloverborder' => '#fffffe',
        'menurolloverborderhover' => '#cccccc',
        'sidebar' => '#d6eff5',
        'sidebartitletext' => '#2e2f2e',
        'sidebartitlebg' => '#a9cfdc',
        'contentblocktitlebg' => '#adcd84',
        'contentblocktitletext' => '#2e2d2e',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#2e2e2e',
        'link' => '#4a7470',
      ),
    ),
    'bluelagoon' => array(
      'title' => t('Blue Lagoon'),
      'colors' => array(
        'top' => '#0779bf',
        'bottom' => '#48a9e4',
        'bg' => '#ffffff',
        'menuitem' => '#cccccc',
        'menuitemaccent' => '#f1f4f0',
        'menurollovertext' => '#000000',
        'menurolloverborder' => '#eeeeee',
        'menurolloverborderhover' => '#0779bf',
        'sidebar' => '#f6f6f2',
        'sidebartitletext' => '#ffffff',
        'sidebartitlebg' => '#0779bf',
        'contentblocktitlebg' => '#cccccc',
        'contentblocktitletext' => '#3b3b3b',
        'footer' => '#292929',
        'titleslogan' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#0071B3',
      ),
    ),
    'firehouse' => array(
      'title' => t('Firehouse'),
      'colors' => array(
        'top' => '#cd2d2d',
        'bottom' => '#cf3535',
        'bg' => '#ffffff',
        'menuitem' => '#cccccc',
        'menuitemaccent' => '#eeefff',
        'menurollovertext' => '#000000',
        'menurolloverborder' => '#eeeeee',
        'menurolloverborderhover' => '#333333',
        'sidebar' => '#f1f4f0',
        'sidebartitletext' => '#ffffff',
        'sidebartitlebg' => '#333333',
        'contentblocktitlebg' => '#cccccc',
        'contentblocktitletext' => '#3b3b3b',
        'footer' => '#1f1d1c',
        'titleslogan' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#d6121f',
      ),
    ),
    'ice' => array(
      'title' => t('Ice'),
      'colors' => array(
        'top' => '#d0d0d0',
        'bottom' => '#c2c4c5',
        'bg' => '#ffffff',
        'menuitem' => '#666666',
        'menuitemaccent' => '#999999',
        'menurollovertext' => '#efefef',
        'menurolloverborder' => '#cccccc',
        'menurolloverborderhover' => '#fffffe',
        'sidebar' => '#efefef',
        'sidebartitletext' => '#ffffff',
        'sidebartitlebg' => '#333333',
        'contentblocktitlebg' => '#cccccc',
        'contentblocktitletext' => '#3b3b3b',
        'footer' => '#24272c',
        'titleslogan' => '#333333',
        'text' => '#4a4a4a',
        'link' => '#019dbf',
      ),
    ),
    'plum' => array(
      'title' => t('Plum'),
      'colors' => array(
        'top' => '#4c1c58',
        'bottom' => '#593662',
        'bg' => '#fffdf7',
        'menuitem' => '#cccccc',
        'menuitemaccent' => '#ffffff',
        'menurollovertext' => '#000000',
        'menurolloverborder' => '#eeeeee',
        'menurolloverborderhover' => '#333333',
        'sidebar' => '#edede7',
        'sidebartitletext' => '#ffffff',
        'sidebartitlebg' => '#333333',
        'contentblocktitlebg' => '#cccccc',
        'contentblocktitletext' => '#3b3b3b',
        'footer' => '#2c2c28',
        'titleslogan' => '#ffffff',
        'text' => '#301313',
        'link' => '#9d408d',
      ),
    ),
    'slate' => array(
      'title' => t('Slate'),
      'colors' => array(
        'top' => '#4a4a4a',
        'bottom' => '#4e4e4e',
        'bg' => '#ffffff',
        'menuitem' => '#cccccc',
        'menuitemaccent' => '#efefef',
        'menurollovertext' => '#000000',
        'menurolloverborder' => '#eeeeee',
        'menurolloverborderhover' => '#333333',
        'sidebar' => '#ffffff',
        'sidebartitletext' => '#ffffff',
        'sidebartitlebg' => '#333333',
        'contentblocktitlebg' => '#cccccc',
        'contentblocktitletext' => '#3b3b3b',
        'footer' => '#161617',
        'titleslogan' => '#ffffff',
        'text' => '#3b3b3b',
        'link' => '#0073b6',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Preview files.
  'preview_library' => 'openchurch_theme/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'openchurch_theme'),
      ],
    ],
  ],
);
