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

  $view = new view;
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
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_downloads']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_downloads']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_downloads']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_downloads']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_downloads']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_oc_downloads']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_oc_downloads']['field_api_classes'] = 0;
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
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$node = node_load(arg(1));

//validate that we have at least 1 download
if ($node->field_oc_downloads[\'und\'][0][\'fid\'])
  return TRUE;
else
  return FALSE;';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
