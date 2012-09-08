<?php
/**
 * @file
 * openchurch_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openchurch_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openchurch_blog_node_info() {
  $items = array(
    'openchurch_blog' => array(
      'name' => t('Blog Entry'),
      'base' => 'node_content',
      'description' => t('A shared on-line journal where people can post diary entries about their personal experiences and hobbies.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
