<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function openchurch_image_imagecache_default_presets() {
  $items = array(
    'oc_creative_element' => array(
      'presetname' => 'oc_creative_element',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100%',
            'height' => '190',
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
function openchurch_image_node_info() {
  $items = array(
    'openchurch_image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('Images are used when only a single image is needed and can be embedded within the sidebar or content area.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
