<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels" && $api == "layouts") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function openchurch_staff_imagecache_default_presets() {
  $items = array(
    'oc_staff_image' => array(
      'presetname' => 'oc_staff_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '250',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'oc_staff_thumb' => array(
      'presetname' => 'oc_staff_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '125',
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
function openchurch_staff_node_info() {
  $items = array(
    'openchurch_staff' => array(
      'name' => t('Staff'),
      'module' => 'features',
      'description' => t('A staff member is someone that works in the church, including both administrative and church leadership.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('About'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function openchurch_staff_views_api() {
  return array(
    'api' => '2',
  );
}
