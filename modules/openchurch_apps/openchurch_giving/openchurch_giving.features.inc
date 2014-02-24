<?php
/**
 * @file
 * openchurch_giving.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_giving_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
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
function openchurch_giving_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openchurch_giving_image_default_styles() {
  $styles = array();

  // Exported image style: oc_charity_thumb.
  $styles['oc_charity_thumb'] = array(
    'name' => 'oc_charity_thumb',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 110,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'oc_charity_thumb',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openchurch_giving_node_info() {
  $items = array(
    'openchurch_charity' => array(
      'name' => t('Charity'),
      'base' => 'node_content',
      'description' => t('A charity allows church members to give to an individual cause that will help community, missions, and many other causes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
