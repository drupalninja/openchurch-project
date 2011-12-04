<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function openchurch_block_node_info() {
  $items = array(
    'openchurch_block' => array(
      'name' => t('Block'),
      'module' => 'features',
      'description' => t('A block is a snippet of html that can go in the sidebar or be embedded in the content area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
