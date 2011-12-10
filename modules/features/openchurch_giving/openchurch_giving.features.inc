<?php
/**
 * @file
 * openchurch_giving.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_giving_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openchurch_giving_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
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
