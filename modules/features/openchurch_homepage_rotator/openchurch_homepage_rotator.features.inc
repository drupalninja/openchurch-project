<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openchurch_homepage_rotator_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_default_fe_nodequeue_queue().
 */
function openchurch_homepage_rotator_default_fe_nodequeue_queue() {
  $export = array();

  $fe_nodequeue_queue = new stdClass;
  $fe_nodequeue_queue->title = 'Homepage Rotator';
  $fe_nodequeue_queue->subqueue_title = '';
  $fe_nodequeue_queue->size = '5';
  $fe_nodequeue_queue->link = 'add to homepage rotator';
  $fe_nodequeue_queue->link_remove = 'remove from homepage rotator';
  $fe_nodequeue_queue->owner = 'nodequeue';
  $fe_nodequeue_queue->show_in_ui = '1';
  $fe_nodequeue_queue->show_in_tab = '1';
  $fe_nodequeue_queue->show_in_links = '1';
  $fe_nodequeue_queue->reference = '0';
  $fe_nodequeue_queue->reverse = '0';
  $fe_nodequeue_queue->i18n = '1';
  $fe_nodequeue_queue->types = array(
    0 => 'openchurch_homepage_rotator',
  );
  $fe_nodequeue_queue->roles = array();
  $fe_nodequeue_queue->count = 0;
  $fe_nodequeue_queue->machine_name = 'openchurch_homepage_rotator';

  $export['openchurch_homepage_rotator'] = $fe_nodequeue_queue;

  return $export;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function openchurch_homepage_rotator_imagecache_default_presets() {
  $items = array(
    'oc_homepage_rotator' => array(
      'presetname' => 'oc_homepage_rotator',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '700',
            'height' => '357',
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
function openchurch_homepage_rotator_node_info() {
  $items = array(
    'openchurch_homepage_rotator' => array(
      'name' => t('Homepage Rotator'),
      'module' => 'features',
      'description' => t('This content will be promoted in a rotating slideshow widget, typically on a homepage or section page.'),
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

/**
 * Implementation of hook_views_api().
 */
function openchurch_homepage_rotator_views_api() {
  return array(
    'api' => '2',
  );
}
