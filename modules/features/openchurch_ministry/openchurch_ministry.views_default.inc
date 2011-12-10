<?php
/**
 * @file
 * openchurch_ministry.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_ministry_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openchurch_ministries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Ministries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Connect With Ministries';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ministries Intro';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Boldly Announce Your Ministries and Missions Through Open Church</h3>
<p>Open Church is a platform to help you spread the word about your ministries and the ongoing efforts to make a difference. &nbsp;We would use this area to tell others about the overall mission of your church and how and where your ministries are headed. &nbsp;</p>
<p>Spread the word through the use of the internet where you can keep everyone informed of all the activities, needs, and events. &nbsp;Now with open church you don\'t have to have a full time web staff to spread the word, you can start for free, and the add features as you grow. &nbsp;If your church grows to a point you want more customization or features we\'re here to help either directly or by connecting you with one of our approved partners.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Thumb */
  $handler->display->display_options['fields']['field_oc_thumb']['id'] = 'field_oc_thumb';
  $handler->display->display_options['fields']['field_oc_thumb']['table'] = 'field_data_field_oc_thumb';
  $handler->display->display_options['fields']['field_oc_thumb']['field'] = 'field_oc_thumb';
  $handler->display->display_options['fields']['field_oc_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_thumb']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_thumb']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_thumb']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_thumb']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_thumb']['settings'] = array(
    'image_style' => 'oc_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_oc_thumb']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'visit page &raquo;';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'openchurch_ministry' => 'openchurch_ministry',
  );

  /* Display: Ministry Link List Block */
  $handler = $view->new_display('block', 'Ministry Link List Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;

  /* Display: Ministry List Page */
  $handler = $view->new_display('page', 'Ministry List Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'openchurch-ministries-list';
  $handler->display->display_options['path'] = 'ministries';
  $export['openchurch_ministries'] = $view;

  $view = new view;
  $view->name = 'openchurch_ministry_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Ministry Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Openchurch Ministry Contacts';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_oc_position' => 'field_oc_position',
    'field_oc_email' => 'field_oc_email',
    'field_oc_phone' => 'field_oc_phone',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Ministry (field_oc_ministry) */
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['id'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['table'] = 'field_data_field_oc_ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['field'] = 'field_oc_ministry_nid';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['label'] = 'Ministry';
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_oc_ministry_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_oc_position']['id'] = 'field_oc_position';
  $handler->display->display_options['fields']['field_oc_position']['table'] = 'field_data_field_oc_position';
  $handler->display->display_options['fields']['field_oc_position']['field'] = 'field_oc_position';
  $handler->display->display_options['fields']['field_oc_position']['label'] = '';
  $handler->display->display_options['fields']['field_oc_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_oc_position']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_oc_email']['id'] = 'field_oc_email';
  $handler->display->display_options['fields']['field_oc_email']['table'] = 'field_data_field_oc_email';
  $handler->display->display_options['fields']['field_oc_email']['field'] = 'field_oc_email';
  $handler->display->display_options['fields']['field_oc_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_oc_phone']['id'] = 'field_oc_phone';
  $handler->display->display_options['fields']['field_oc_phone']['table'] = 'field_data_field_oc_phone';
  $handler->display->display_options['fields']['field_oc_phone']['field'] = 'field_oc_phone';
  $handler->display->display_options['fields']['field_oc_phone']['label'] = '';
  $handler->display->display_options['fields']['field_oc_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_oc_phone']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_oc_ministry_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 Contacts';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'openchurch_ministry' => 'openchurch_ministry',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'openchurch_staff' => 'openchurch_staff',
  );

  /* Display: Ministry Contacts Block */
  $handler = $view->new_display('block', 'Ministry Contacts Block', 'block');
  $export['openchurch_ministry_contacts'] = $view;

  return $export;
}
