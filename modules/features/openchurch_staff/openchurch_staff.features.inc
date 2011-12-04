<?php
/**
 * @file
 * openchurch_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
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
