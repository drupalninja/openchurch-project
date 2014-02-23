<?php
/**
 * @file
 * openchurch_podcast.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_podcast_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openchurch_podcast_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openchurch_podcast_node_info() {
  $items = array(
    'openchurch_podcast' => array(
      'name' => t('Podcast'),
      'base' => 'node_content',
      'description' => t('Podcasts can be sermons, lectures or other church-related audio files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
