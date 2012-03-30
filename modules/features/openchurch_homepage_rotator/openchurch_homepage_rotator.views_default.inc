<?php
/**
 * @file
 * openchurch_homepage_rotator.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_homepage_rotator_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openchurch_homepage_rotator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Homepage Rotator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'title' => 0,
    'field_oc_link' => 0,
    'field_oc_image' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'title' => 0,
    'field_oc_link' => 0,
    'field_oc_image' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Homepage Rotator Nodequeue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'openchurch_homepage_rotator' => 'openchurch_homepage_rotator',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_oc_link']['id'] = 'field_oc_link';
  $handler->display->display_options['fields']['field_oc_link']['table'] = 'field_data_field_oc_link';
  $handler->display->display_options['fields']['field_oc_link']['field'] = 'field_oc_link';
  $handler->display->display_options['fields']['field_oc_link']['label'] = '';
  $handler->display->display_options['fields']['field_oc_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_oc_link']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oc_image']['id'] = 'field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['table'] = 'field_data_field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['field'] = 'field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['label'] = '';
  $handler->display->display_options['fields']['field_oc_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['alter']['text'] = '[field_oc_image]';
  $handler->display->display_options['fields']['field_oc_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['alter']['path'] = '[field_oc_link]';
  $handler->display->display_options['fields']['field_oc_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_oc_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_image']['settings'] = array(
    'image_style' => 'oc_homepage_rotator',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_oc_image']['field_api_classes'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openchurch_homepage_rotator' => 'openchurch_homepage_rotator',
  );

  /* Display: Homepage Rotator Block */
  $handler = $view->new_display('block', 'Homepage Rotator Block', 'block');
  $export['openchurch_homepage_rotator'] = $view;

  return $export;
}
