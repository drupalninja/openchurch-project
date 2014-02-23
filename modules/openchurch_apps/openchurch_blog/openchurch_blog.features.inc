<?php
/**
 * @file
 * openchurch_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
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
function openchurch_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
