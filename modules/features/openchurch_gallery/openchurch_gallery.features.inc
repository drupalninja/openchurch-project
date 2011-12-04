<?php
/**
 * @file
 * openchurch_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function openchurch_gallery_node_info() {
  $items = array(
    'openchurch_gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Galleries are collections of images with descriptions.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
