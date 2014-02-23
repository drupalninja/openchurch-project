<?php
/**
 * @file
 * openchurch_bulletin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_bulletin_ctools_plugin_api($module = NULL, $api = NULL) {
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
function openchurch_bulletin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openchurch_bulletin_node_info() {
  $items = array(
    'openchurch_bulletin' => array(
      'name' => t('Bulletin'),
      'base' => 'node_content',
      'description' => t('A bulletin is an electronic version of the news bulletin handed out during church service.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
