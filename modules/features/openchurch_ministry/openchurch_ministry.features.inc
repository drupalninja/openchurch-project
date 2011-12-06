<?php
/**
 * @file
 * openchurch_ministry.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_ministry_ctools_plugin_api() {
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
 * Implements hook_views_api().
 */
function openchurch_ministry_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function openchurch_ministry_node_info() {
  $items = array(
    'openchurch_ministry' => array(
      'name' => t('Ministry'),
      'base' => 'node_content',
      'description' => t('Ministry pages describe various church ministries that members want to know more about.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
