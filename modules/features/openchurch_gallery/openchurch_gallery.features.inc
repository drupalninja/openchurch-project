<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_gallery_ctools_plugin_api() {
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
function openchurch_gallery_imagecache_default_presets() {
  $items = array(
    'oc_album_cover' => array(
      'presetname' => 'oc_album_cover',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '170',
            'height' => '110',
          ),
        ),
      ),
    ),
    'oc_thumb' => array(
      'presetname' => 'oc_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '90',
            'height' => '90',
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
function openchurch_gallery_node_info() {
  $items = array(
    'openchurch_gallery' => array(
      'name' => t('Gallery'),
      'module' => 'features',
      'description' => t('Galleries are collections of images with descriptions.'),
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
function openchurch_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
