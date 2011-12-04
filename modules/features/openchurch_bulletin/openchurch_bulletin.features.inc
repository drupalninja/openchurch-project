<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_bulletin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function openchurch_bulletin_node_info() {
  $items = array(
    'openchurch_bulletin' => array(
      'name' => t('Bulletin'),
      'module' => 'features',
      'description' => t('A bulletin is an electronic version of the news bulletin handed out during church service.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function openchurch_bulletin_views_api() {
  return array(
    'api' => '2',
  );
}
