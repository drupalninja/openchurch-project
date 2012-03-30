<?php
/**
 * @file
 * openchurch_podcast.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openchurch_podcast_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openchurch_latest_podcast';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Latest Podcast';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'This Week\'s Sermon';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oc_author' => 'field_oc_author',
    'field_oc_date' => 'field_oc_date',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
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
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_oc_author']['id'] = 'field_oc_author';
  $handler->display->display_options['fields']['field_oc_author']['table'] = 'field_data_field_oc_author';
  $handler->display->display_options['fields']['field_oc_author']['field'] = 'field_oc_author';
  $handler->display->display_options['fields']['field_oc_author']['label'] = '';
  $handler->display->display_options['fields']['field_oc_author']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_oc_author']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_oc_date']['id'] = 'field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['table'] = 'field_data_field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['field'] = 'field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['label'] = '';
  $handler->display->display_options['fields']['field_oc_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_oc_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date (field_oc_date) */
  $handler->display->display_options['sorts']['field_oc_date_value']['id'] = 'field_oc_date_value';
  $handler->display->display_options['sorts']['field_oc_date_value']['table'] = 'field_data_field_oc_date';
  $handler->display->display_options['sorts']['field_oc_date_value']['field'] = 'field_oc_date_value';
  $handler->display->display_options['sorts']['field_oc_date_value']['order'] = 'DESC';
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
    'openchurch_podcast' => 'openchurch_podcast',
  );

  /* Display: Latest Podcast Block */
  $handler = $view->new_display('block', 'Latest Podcast Block', 'block');
  $export['openchurch_latest_podcast'] = $view;

  $view = new view;
  $view->name = 'openchurch_podcasts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Openchurch Podcasts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sermon Podcasts Downloads';
  $handler->display->display_options['css_class'] = 'openchurch-podcasts';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_oc_date']['id'] = 'field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['table'] = 'field_data_field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['field'] = 'field_oc_date';
  $handler->display->display_options['fields']['field_oc_date']['label'] = '';
  $handler->display->display_options['fields']['field_oc_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['text'] = '[field_oc_date-value]';
  $handler->display->display_options['fields']['field_oc_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_oc_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_date']['settings'] = array(
    'format_type' => 'openchurch_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_oc_date']['field_api_classes'] = 0;
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
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_oc_author']['id'] = 'field_oc_author';
  $handler->display->display_options['fields']['field_oc_author']['table'] = 'field_data_field_oc_author';
  $handler->display->display_options['fields']['field_oc_author']['field'] = 'field_oc_author';
  $handler->display->display_options['fields']['field_oc_author']['label'] = '';
  $handler->display->display_options['fields']['field_oc_author']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_author']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_author']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_oc_author']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
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
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_oc_audio']['id'] = 'field_oc_audio';
  $handler->display->display_options['fields']['field_oc_audio']['table'] = 'field_data_field_oc_audio';
  $handler->display->display_options['fields']['field_oc_audio']['field'] = 'field_oc_audio';
  $handler->display->display_options['fields']['field_oc_audio']['label'] = '';
  $handler->display->display_options['fields']['field_oc_audio']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['text'] = '<a href="[field_oc_audio]" title="download podcast mp3 file">download mp3 file</a>';
  $handler->display->display_options['fields']['field_oc_audio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_audio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oc_audio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oc_audio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oc_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_audio']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_oc_audio']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date (field_oc_date) */
  $handler->display->display_options['sorts']['field_oc_date_value']['id'] = 'field_oc_date_value';
  $handler->display->display_options['sorts']['field_oc_date_value']['table'] = 'field_data_field_oc_date';
  $handler->display->display_options['sorts']['field_oc_date_value']['field'] = 'field_oc_date_value';
  $handler->display->display_options['sorts']['field_oc_date_value']['order'] = 'DESC';
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
    'openchurch_podcast' => 'openchurch_podcast',
  );

  /* Display: Podcasts and Downloads Page */
  $handler = $view->new_display('page', 'Podcasts and Downloads Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>
<?php 
$image = theme(\'image\', array(\'width\' => \'161\', \'height\' => \'67\', \'path\' => drupal_get_path(\'module\', \'openchurch_podcast\').\'/images/podcast-icon.jpg\', \'attributes\' => array(\'style\' => \'float: right; margin-left: 10px;\'))); 
print $image;
?>
Enjoy our weekly sermons below.  You will see that you may press play directly on this page or download them to your own player.  Please be aware the files may be large.</p>
<p><strong>Note to site administrators, enable podcast feed by submitting the <a href="/multimedia/podcasts/feed">RSS feed</a> to the <a href="http://www.apple.com/itunes/podcasts/specs.html#submitting">iTunes store</a> and linking that new link to the icon above.</strong></p>
<h3 class="title">Recent Sermons</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['path'] = 'multimedia/podcasts';

  /* Display: Podcasts and Downloads Feed */
  $handler = $view->new_display('feed', 'Podcasts and Downloads Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['path'] = 'multimedia/podcasts/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $export['openchurch_podcasts'] = $view;

  return $export;
}
