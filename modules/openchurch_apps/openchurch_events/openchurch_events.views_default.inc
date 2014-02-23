<?php
/**
 * @file
 * openchurch_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openchurch_event_dates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenChurch Event Dates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_oc_dates']['id'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['field'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['element_class'] = 'field-items';
  $handler->display->display_options['fields']['field_oc_dates']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_oc_dates']['element_wrapper_class'] = 'field field-label-inline';
  $handler->display->display_options['fields']['field_oc_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '5',
    'multiple_from' => 'now',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_oc_dates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_oc_dates']['multi_type'] = 'ul';
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
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'openchurch_event' => 'openchurch_event',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: OpenChurch Event Dates Block */
  $handler = $view->new_display('block', 'OpenChurch Event Dates Block', 'block_1');
  $export['openchurch_event_dates'] = $view;

  $view = new view();
  $view->name = 'openchurch_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenChurch Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['css_class'] = 'openchurch-events-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oc_dates' => 'field_oc_dates',
    'field_oc_ministry' => 'field_oc_ministry',
    'field_oc_dates_1' => 'field_oc_dates_1',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['layout'] = 'bryant';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_oc_dates' => 'sidebar',
    'title' => 'contentmain',
    'field_oc_ministry' => 'contentmain',
    'field_oc_dates_1' => 'contentmain',
    'field_oc_location' => 'contentmain',
    'body' => 'contentmain',
    'nid' => 'contentmain',
    'field_oc_url' => 'contentmain',
    'nothing' => 'contentmain',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no events were found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_oc_dates']['id'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['field'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['label'] = '';
  $handler->display->display_options['fields']['field_oc_dates']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_oc_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['settings'] = array(
    'format_type' => 'openchurch_short_date',
    'fromto' => 'value',
    'multiple_number' => '5',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_oc_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Ministry */
  $handler->display->display_options['fields']['field_oc_ministry']['id'] = 'field_oc_ministry';
  $handler->display->display_options['fields']['field_oc_ministry']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['fields']['field_oc_ministry']['field'] = 'field_oc_ministry';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_oc_dates_1']['id'] = 'field_oc_dates_1';
  $handler->display->display_options['fields']['field_oc_dates_1']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates_1']['field'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '5',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_oc_dates_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_location']['id'] = 'field_oc_location';
  $handler->display->display_options['fields']['field_oc_location']['table'] = 'field_data_field_oc_location';
  $handler->display->display_options['fields']['field_oc_location']['field'] = 'field_oc_location';
  $handler->display->display_options['fields']['field_oc_location']['label'] = 'Where';
  $handler->display->display_options['fields']['field_oc_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Details';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'more details &raquo;';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Register URL */
  $handler->display->display_options['fields']['field_oc_url']['id'] = 'field_oc_url';
  $handler->display->display_options['fields']['field_oc_url']['table'] = 'field_data_field_oc_url';
  $handler->display->display_options['fields']['field_oc_url']['field'] = 'field_oc_url';
  $handler->display->display_options['fields']['field_oc_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_oc_url']['alter']['text'] = 'register online!';
  $handler->display->display_options['fields']['field_oc_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_oc_url']['alter']['path'] = '[field_oc_url]';
  $handler->display->display_options['fields']['field_oc_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_oc_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="more-details">[nid]</span>
<span class="register-online">[field_oc_url]</span>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-field-php';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: When -  start date (field_oc_dates) */
  $handler->display->display_options['sorts']['field_oc_dates_value']['id'] = 'field_oc_dates_value';
  $handler->display->display_options['sorts']['field_oc_dates_value']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['sorts']['field_oc_dates_value']['field'] = 'field_oc_dates_value';
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
    'openchurch_event' => 'openchurch_event',
  );
  /* Filter criterion: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['filters']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['filters']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['filters']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['filters']['field_oc_ministry_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_ministry_nid']['expose']['operator_id'] = 'field_oc_ministry_nid_op';
  $handler->display->display_options['filters']['field_oc_ministry_nid']['expose']['label'] = 'Filter by Ministry';
  $handler->display->display_options['filters']['field_oc_ministry_nid']['expose']['operator'] = 'field_oc_ministry_nid_op';
  $handler->display->display_options['filters']['field_oc_ministry_nid']['expose']['identifier'] = 'oc_ministry_nid';
  /* Filter criterion: Content: When -  start date (field_oc_dates) */
  $handler->display->display_options['filters']['field_oc_dates_value']['id'] = 'field_oc_dates_value';
  $handler->display->display_options['filters']['field_oc_dates_value']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['filters']['field_oc_dates_value']['field'] = 'field_oc_dates_value';
  $handler->display->display_options['filters']['field_oc_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_oc_dates_value']['default_date'] = 'now';

  /* Display: Upcoming Events Page */
  $handler = $view->new_display('page', 'Upcoming Events Page', 'page_1');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['openchurch_events'] = $view;

  $view = new view();
  $view->name = 'openchurch_events_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'OpenChurch Events Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Calendar';
  $handler->display->display_options['css_class'] = 'openchurch-events-calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_oc_dates']['id'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['field'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['label'] = '';
  $handler->display->display_options['fields']['field_oc_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_oc_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['delta_offset'] = '0';
  /* Sort criterion: Content: When -  start date (field_oc_dates) */
  $handler->display->display_options['sorts']['field_oc_dates_value']['id'] = 'field_oc_dates_value';
  $handler->display->display_options['sorts']['field_oc_dates_value']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['sorts']['field_oc_dates_value']['field'] = 'field_oc_dates_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_oc_dates.field_oc_dates_value' => 'field_data_field_oc_dates.field_oc_dates_value',
  );
  $handler->display->display_options['path'] = 'events/calendar';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Event Calendar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Month';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_oc_dates.field_oc_dates_value' => 'field_data_field_oc_dates.field_oc_dates_value',
  );
  $handler->display->display_options['path'] = 'events/calendar/week';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_oc_dates.field_oc_dates_value' => 'field_data_field_oc_dates.field_oc_dates_value',
  );
  $handler->display->display_options['path'] = 'events/calendar/day';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_oc_dates.field_oc_dates_value' => 'field_data_field_oc_dates.field_oc_dates_value',
  );
  $handler->display->display_options['path'] = 'events/calendar/year';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_oc_dates.field_oc_dates_value' => 'field_data_field_oc_dates.field_oc_dates_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_oc_dates.field_oc_dates_value' => 'field_data_field_oc_dates.field_oc_dates_value',
  );
  $export['openchurch_events_calendar'] = $view;

  $view = new view();
  $view->name = 'openchurch_upcoming_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenChurch Upcoming Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['label'] = 'Ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['delta'] = '-1';
  /* Field: Content: When */
  $handler->display->display_options['fields']['field_oc_dates']['id'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['field'] = 'field_oc_dates';
  $handler->display->display_options['fields']['field_oc_dates']['label'] = '';
  $handler->display->display_options['fields']['field_oc_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_oc_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_oc_dates']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: When -  start date (field_oc_dates) */
  $handler->display->display_options['sorts']['field_oc_dates_value']['id'] = 'field_oc_dates_value';
  $handler->display->display_options['sorts']['field_oc_dates_value']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['sorts']['field_oc_dates_value']['field'] = 'field_oc_dates_value';
  /* Contextual filter: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_oc_ministry_nid']['validate_options']['types'] = array(
    'openchurch_ministry' => 'openchurch_ministry',
  );
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
    'openchurch_event' => 'openchurch_event',
  );
  /* Filter criterion: Content: When -  start date (field_oc_dates) */
  $handler->display->display_options['filters']['field_oc_dates_value']['id'] = 'field_oc_dates_value';
  $handler->display->display_options['filters']['field_oc_dates_value']['table'] = 'field_data_field_oc_dates';
  $handler->display->display_options['filters']['field_oc_dates_value']['field'] = 'field_oc_dates_value';
  $handler->display->display_options['filters']['field_oc_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_oc_dates_value']['default_date'] = 'now';

  /* Display: Upcoming Events By Ministry Block */
  $handler = $view->new_display('block', 'Upcoming Events By Ministry Block', 'block');
  $export['openchurch_upcoming_events'] = $view;

  return $export;
}
