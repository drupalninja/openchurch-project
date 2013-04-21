<?php
/**
 * @file
 * openchurch_defaults.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_defaults_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openchurch_related_downloads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Related Downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Downloads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Related Downloads */
  $handler->display->display_options['fields']['field_oc_downloads']['id'] = 'field_oc_downloads';
  $handler->display->display_options['fields']['field_oc_downloads']['table'] = 'field_data_field_oc_downloads';
  $handler->display->display_options['fields']['field_oc_downloads']['field'] = 'field_oc_downloads';
  $handler->display->display_options['fields']['field_oc_downloads']['label'] = '';
  $handler->display->display_options['fields']['field_oc_downloads']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_downloads']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_oc_downloads']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_downloads']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_oc_downloads']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$node = node_load(arg(1));

//validate that we have at least 1 download
if (isset($node->field_oc_downloads[LANGUAGE_NONE][0][\'fid\']))
  return TRUE;
else
  return FALSE;';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related Downloads Block */
  $handler = $view->new_display('block', 'Related Downloads Block', 'block');
  $export['openchurch_related_downloads'] = $view;

  return $export;
}
