<?php
/**
 * @file
 * openchurch_homepage_rotator.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_homepage_rotator_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openchurch_homepage_rotator_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function openchurch_homepage_rotator_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: openchurch_homepage_rotator
  $nodequeues['openchurch_homepage_rotator'] = array(
    'name' => 'openchurch_homepage_rotator',
    'title' => 'Homepage Rotator',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'openchurch_homepage_rotator',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function openchurch_homepage_rotator_image_default_styles() {
  $styles = array();

  // Exported image style: oc_homepage_rotator.
  $styles['oc_homepage_rotator'] = array(
    'name' => 'oc_homepage_rotator',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 357,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'oc_homepage_rotator',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openchurch_homepage_rotator_node_info() {
  $items = array(
    'openchurch_homepage_rotator' => array(
      'name' => t('Homepage Rotator'),
      'base' => 'node_content',
      'description' => t('This content will be promoted in a rotating slideshow widget, typically on a homepage or section page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
