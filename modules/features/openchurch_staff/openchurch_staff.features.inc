<?php
/**
 * @file
 * openchurch_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openchurch_staff_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openchurch_staff_image_default_styles() {
  $styles = array();

  // Exported image style: oc_staff_image.
  $styles['oc_staff_image'] = array(
    'name' => 'oc_staff_image',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => 250,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'oc_staff_image',
  );

  // Exported image style: oc_staff_thumb.
  $styles['oc_staff_thumb'] = array(
    'name' => 'oc_staff_thumb',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 125,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'oc_staff_thumb',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openchurch_staff_node_info() {
  $items = array(
    'openchurch_staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('A staff member is someone that works in the church, including both administrative and church leadership.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
