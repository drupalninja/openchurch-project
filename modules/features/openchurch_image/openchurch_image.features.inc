<?php
/**
 * @file
 * openchurch_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function openchurch_image_node_info() {
  $items = array(
    'openchurch_image' => array(
      'name' => t('Image'),
      'base' => 'node_content',
      'description' => t('Images are used when only a single image is needed and can be embedded within the sidebar or content area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
