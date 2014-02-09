<?php
/**
 * @file
 * openchurch_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openchurch_galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Galleries';
  $handler->display->display_options['css_class'] = 'openchurch-galleries-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['layout'] = 'bryant';
  $handler->display->display_options['row_options']['regions'] = array(
    'title' => 'contentmain',
    'field_oc_thumb' => 'sidebar',
    'field_oc_date' => 'contentmain',
    'field_oc_location' => 'contentmain',
    'body' => 'contentmain',
    'nid' => 'contentmain',
  );
  /* Relationship: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['label'] = 'Ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Thumb */
  $handler->display->display_options['fields']['field_oc_thumb']['id'] = 'field_oc_thumb';
  $handler->display->display_options['fields']['field_oc_thumb']['table'] = 'field_data_field_oc_thumb';
  $handler->display->display_options['fields']['field_oc_thumb']['field'] = 'field_oc_thumb';
  $handler->display->display_options['fields']['field_oc_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_oc_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_thumb']['settings'] = array(
    'image_style' => 'oc_album_cover',
    'image_link' => 'content',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_oc_date']['id'] = 'field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['table'] = 'field_data_field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['field'] = 'field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_location']['id'] = 'field_oc_location';
  $handler->display->display_options['fields']['field_oc_location']['table'] = 'field_data_field_oc_location';
  $handler->display->display_options['fields']['field_oc_location']['field'] = 'field_oc_location';
  $handler->display->display_options['fields']['field_oc_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'view photos &raquo;';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date (field_oc_date) */
  $handler->display->display_options['sorts']['field_oc_date_value']['id'] = 'field_oc_date_value';
  $handler->display->display_options['sorts']['field_oc_date_value']['table'] = 'field_data_field_oc_date';
  $handler->display->display_options['sorts']['field_oc_date_value']['field'] = 'field_oc_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_oc_ministry_nid';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openchurch_gallery' => 'openchurch_gallery',
  );

  /* Display: Galleries Page */
  $handler = $view->new_display('page', 'Galleries Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'openchurch-galleries-list';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'openchurch_gallery' => 'openchurch_gallery',
  );
  $handler->display->display_options['path'] = 'media/galleries';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Photo Galleries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Galleries by Ministry Block */
  $handler = $view->new_display('block', 'Galleries by Ministry Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['label'] = 'Ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['title'] = '%1 Photo Archives';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['validate_options']['types'] = array(
    'openchurch_ministry' => 'openchurch_ministry',
  );
  $export['openchurch_galleries'] = $view;

  return $export;
}
