<?php
/**
 * @file
 * openchurch_homepage_rotator.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_homepage_rotator_ctools_plugin_api() {
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
