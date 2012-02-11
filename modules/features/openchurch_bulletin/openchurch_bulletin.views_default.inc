<?php
/**
 * @file
 * openchurch_bulletin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_bulletin_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openchurch_bulletins';
  $view->description = 'Openchurch digital bulletin download list';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Bulletins';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Weekly Bulletins';
  $handler->display->display_options['css_class'] = 'openchurch-bulletin-list';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'phpcode';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oc_bulletin_date' => 'field_oc_bulletin_date',
    'field_oc_bulletin_file' => 'field_oc_bulletin_file',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = FALSE;
  $handler->display->display_options['header']['text']['content'] = '<p>OpenChurch creates weekly bulletins to keep everyone informed about the inner workings of our church. Here you will find an archive of bulletins as a resource if you need it. If you would like a bulletin not found here please contact the church office.</p>

<h3 class="title">Bulletin Archives</h3>';
  $handler->display->display_options['header']['text']['format'] = 'full_html';
  $handler->display->display_options['header']['text']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No bulletins found';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Bulletin Date */
  $handler->display->display_options['fields']['field_oc_bulletin_date']['id'] = 'field_oc_bulletin_date';
  $handler->display->display_options['fields']['field_oc_bulletin_date']['table'] = 'field_data_field_oc_bulletin_date';
  $handler->display->display_options['fields']['field_oc_bulletin_date']['field'] = 'field_oc_bulletin_date';
  $handler->display->display_options['fields']['field_oc_bulletin_date']['label'] = '';
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_oc_bulletin_date']['field_api_classes'] = 0;
  /* Field: Content: Bulletin */
  $handler->display->display_options['fields']['field_oc_bulletin_file']['id'] = 'field_oc_bulletin_file';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['table'] = 'field_data_field_oc_bulletin_file';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['field'] = 'field_oc_bulletin_file';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['label'] = '';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['text'] = 'Download PDF &raquo;';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['path'] = '[field_oc_bulletin_file]';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['alt'] = 'Download Bulletin PDF';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['field_api_classes'] = 0;
  /* Sort criterion: Content: Bulletin Date (field_oc_bulletin_date) */
  $handler->display->display_options['sorts']['field_oc_bulletin_date_value']['id'] = 'field_oc_bulletin_date_value';
  $handler->display->display_options['sorts']['field_oc_bulletin_date_value']['table'] = 'field_data_field_oc_bulletin_date';
  $handler->display->display_options['sorts']['field_oc_bulletin_date_value']['field'] = 'field_oc_bulletin_date_value';
  $handler->display->display_options['sorts']['field_oc_bulletin_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openchurch_bulletin' => 'openchurch_bulletin',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Bulletin Archive Page */
  $handler = $view->new_display('page', 'Bulletin Archive Page', 'page_1');
  $handler->display->display_options['path'] = 'multimedia/bulletins';
  $export['openchurch_bulletins'] = $view;

  $view = new view;
  $view->name = 'openchurch_latest_bulletin';
  $view->description = 'Links to the latest digital church bulletin.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Latest Bulletin';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'This Week\'s Bulletin';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View Full Archives &raquo;';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/multimedia/bulletins">View Full Archives &raquo;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Content: Bulletin */
  $handler->display->display_options['fields']['field_oc_bulletin_file']['id'] = 'field_oc_bulletin_file';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['table'] = 'field_data_field_oc_bulletin_file';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['field'] = 'field_oc_bulletin_file';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['label'] = '';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['text'] = '<a href="[field_oc_bulletin_file]">Download Latest (PDF)</a> &raquo;';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_bulletin_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_oc_bulletin_file']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'openchurch_bulletin' => 'openchurch_bulletin',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Latest Bulletin Block */
  $handler = $view->new_display('block', 'Latest Bulletin Block', 'block_1');
  $export['openchurch_latest_bulletin'] = $view;

  return $export;
}
