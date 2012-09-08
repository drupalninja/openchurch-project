<?php
/**
 * @file
 * openchurch_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_video_ctools_plugin_api() {
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
function openchurch_video_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openchurch_video_node_info() {
  $items = array(
    'openchurch_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Video content can be entered by referencing an external source, like YouTube or Vimeo.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
