<?php
/**
 * @file
 * openchurch_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_staff_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openchurch_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff Directory';
  $handler->display->display_options['css_class'] = 'openchurch-staff-list';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_oc_staff_type';
  $handler->display->display_options['style_options']['row_class'] = 'staff-type';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_oc_position' => 'field_oc_position',
    'field_oc_email' => 'field_oc_email',
    'field_oc_phone' => 'field_oc_phone',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3 class="title">About Our Staff</h3>
<p>OpenChurch\'s full time and part time staff and ministers are dedicated to serving the needs of the Church and would be happy to talk to you and help you in any way we can! Feel free to call the church and speak with our receptionist, or you may contact a staff member directly below.</p>
<p><strong>Church Office Hours</strong>: 8am - 5pm Mon-Fri<br><strong>Phone</strong>: 615.375.0601<br><strong>Fax</strong>: 615.373.5343</p> ';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Content: Staff Type (field_oc_staff_type) */
  $handler->display->display_options['relationships']['field_oc_staff_type_tid']['id'] = 'field_oc_staff_type_tid';
  $handler->display->display_options['relationships']['field_oc_staff_type_tid']['table'] = 'field_data_field_oc_staff_type';
  $handler->display->display_options['relationships']['field_oc_staff_type_tid']['field'] = 'field_oc_staff_type_tid';
  $handler->display->display_options['relationships']['field_oc_staff_type_tid']['required'] = 1;
  /* Field: Content: Staff Type */
  $handler->display->display_options['fields']['field_oc_staff_type']['id'] = 'field_oc_staff_type';
  $handler->display->display_options['fields']['field_oc_staff_type']['table'] = 'field_data_field_oc_staff_type';
  $handler->display->display_options['fields']['field_oc_staff_type']['field'] = 'field_oc_staff_type';
  $handler->display->display_options['fields']['field_oc_staff_type']['label'] = '';
  $handler->display->display_options['fields']['field_oc_staff_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['text'] = '<a name="staff-group-[field_oc_staff_type-tid]"></a>[field_oc_staff_type]';
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_staff_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_staff_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_staff_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_staff_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_oc_staff_type']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oc_image']['id'] = 'field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['table'] = 'field_data_field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['field'] = 'field_oc_image';
  $handler->display->display_options['fields']['field_oc_image']['label'] = '';
  $handler->display->display_options['fields']['field_oc_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_image']['alter']['ellipsis'] = 1;
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
    'image_style' => 'oc_staff_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_oc_image']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_oc_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_position']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_oc_position']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_oc_email']['id'] = 'field_oc_email';
  $handler->display->display_options['fields']['field_oc_email']['table'] = 'field_data_field_oc_email';
  $handler->display->display_options['fields']['field_oc_email']['field'] = 'field_oc_email';
  $handler->display->display_options['fields']['field_oc_email']['label'] = '';
  $handler->display->display_options['fields']['field_oc_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['alter']['text'] = 'email';
  $handler->display->display_options['fields']['field_oc_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['alter']['path'] = 'mailto:[field_oc_email]';
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
  $handler->display->display_options['fields']['field_oc_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_email']['hide_empty'] = 0;
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
  $handler->display->display_options['fields']['field_oc_phone']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_phone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_oc_phone']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_oc_phone']['field_api_classes'] = 0;
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
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_oc_staff_type_tid';
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
    'openchurch_staff' => 'openchurch_staff',
  );

  /* Display: Staff List Page */
  $handler = $view->new_display('page_with_page_title', 'Staff List Page', 'page_with_page_title_1');
  $handler->display->display_options['path'] = 'about/staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Staff Directory';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['openchurch_staff'] = $view;

  return $export;
}
