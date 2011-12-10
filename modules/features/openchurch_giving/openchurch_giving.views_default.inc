<?php
/**
 * @file
 * openchurch_giving.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_giving_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openchurch_giving';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Giving';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faithful Giving';
  $handler->display->display_options['css_class'] = 'openchurch-giving-list';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>At OpenChurch we realize that many of you handle all your family finances via the internet. We are glad to announce we now have a way for you to manage your giving through our online giving platform.</p>

<p>By giving online you can give one time donations to specific causes or ministries, setup recurring monthly donations, and view a detailed history at any point you desire. All of your information is held strictly confidential. Even though you will have the opportunity to log in and print transaction histories at any point you prefer, our system is linked with our accounting so you will still get an end of year letter with your giving history.</p>

<h3 class="title">Special Needs Giving</h3>

<p>Occasionally, opportunities arise for our body to give to individual causes that will help our community, missions abroad, and many other causes. In addition to our standard online giving system, you may use this site to give specifically to any of the following causes:</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
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
    'image_style' => 'oc_charity_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_oc_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
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
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Click here for info';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'openchurch_charity' => 'openchurch_charity',
  );

  /* Display: Giving Page */
  $handler = $view->new_display('page', 'Giving Page', 'page_1');
  $handler->display->display_options['path'] = 'give';
  $export['openchurch_giving'] = $view;

  return $export;
}
