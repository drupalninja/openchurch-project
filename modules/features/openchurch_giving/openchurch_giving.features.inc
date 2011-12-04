<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_giving_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function openchurch_giving_imagecache_default_presets() {
  $items = array(
    'oc_charity_thumb' => array(
      'presetname' => 'oc_charity_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '110',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function openchurch_giving_node_info() {
  $items = array(
    'openchurch_charity' => array(
      'name' => t('Charity'),
      'module' => 'features',
      'description' => t('A charity allows church members to give to an individual cause that will help community, missions, and many other causes.'),
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

/**
 * Implementation of hook_views_api().
 */
function openchurch_giving_views_api() {
  return array(
    'api' => '2',
  );
}
