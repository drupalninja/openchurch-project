<?php

/**
 * Implementation of hook_profile_details().
 */
function openchurch_profile_details() {
  return array(
    'name' => 'OpenChurch',
    'description' => 'OpenChurch theme and suite of features for church and ministry websites presented by OpenChurchSite.com'
  );
}

/**
 * Implementation of hook_profile_modules().
 */
function openchurch_profile_modules() {
  return array(
    'block',
    'comment',
    'dblog',
    'filter',
    'help',
    'menu',
    'node',
    'system',
    'search',
    'user',
    'path',
    'php',
    'syslog',
    'taxonomy',
    'upload',
  );
}

/**
 * Returns an array list of core contributed modules.
 */
function _openchurch_core_modules() {

 $contrib_modules = array(
    'admin_menu',
    'admin_role',
    'backup_migrate',
    'better_formats',
    'calendar',
    'content',
    'content_copy',
    'content_taxonomy',
    'content_taxonomy_options',
    'content_taxonomy_autocomplete',
    'context',
    'context_ui',
    'ctools',
    'ctools_custom_content',
    'date_timezone',
    'date_api',
    'date',
    'date_popup',
    'email',
    'fe_nodequeue',
    'filefield',
    'filefield_sources',
    'fieldgroup',
    'features',
    'globalredirect',
    'google_analytics',
    'google_fonts',
    'google_fonts_ui',
    'imageapi',
    'imageapi_gd',
    'imagecache',
    'imagecache_ui',
    'imagefield',
    'imce',
    'imce_wysiwyg',
    'itunes',
    'jquery_ui',
    'lightbox2',
    'link',
    'location',
    'location_cck',
    'menu_breadcrumb',
    'menu_editor',
    'module_filter',
    'node_export',
    'node_export_file',
    'nodequeue',
    'nodereference',
    'nodereference_url',
    'onepixelout',
    'optionwidgets',
    'number',
    'page_title',
    'pathauto',
    'pathologic',
    'panels',
    'panels_node',
    'profile',
    'recaptcha',
    'skinr',
    'strongarm',
    'swftools',
    'swfobject2',
    'text',
    'token',
    'unlimited_css',
    'views',
    'views_bulk_operations',
    'views_content',
    'views_customfield',
    'views_slideshow',
    'views_slideshow_singleframe',
    'views_ui',
    'views_export',
    'views_attach',
    'vertical_tabs',
    'webform',
    'wysiwyg',
  );

  return $contrib_modules;
}

function _openchurch_feature_modules(){
  return array(//these are in a specific order
    'openchurch_block',
    'openchurch_blog',
    'openchurch_giving',
    'openchurch_ministry',
    'openchurch_events',
    'openchurch_homepage_rotator',
    'openchurch_image',
    'openchurch_podcast',
    'openchurch_bulletin',
    'openchurch_gallery',
    'openchurch_defaults',//will prepopulate additional settings
    'openchurch_staff',
  );
}

/**
 * Implementation of hook_profile_task_list().
 */
function openchurch_profile_task_list() {
  $tasks = array(
    'openchurch-configure' => st('OpenChurch configuration'),
  );
  return $tasks;
}

/**
 * Implementation of hook_profile_tasks().
 */
function openchurch_profile_tasks(&$task, $url) {
  $output = '';

  if ($task == 'profile') {
    $modules = _openchurch_core_modules();
    $modules = array_merge($modules, _openchurch_feature_modules());

    $files = module_rebuild_cache();
    $operations = array();
    foreach ($modules as $module) {
      $operations[] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }
    $batch = array(
    'operations' => $operations,
    'finished' => '_openchurch_profile_batch_finished',
    'title' => st('Installing @drupal', array('@drupal' => drupal_install_profile_name())),
    'error_message' => st('The installation has encountered an error.'),
    );

    // Start a batch, switch to 'profile-install-batch' task. We need to
    // set the variable here, because batch_process() redirects.
    variable_set('install_task', 'profile-install-batch');
    batch_set($batch);
    batch_process($url, $url);
  }

  if ($task == 'openchurch-configure') {
    //create page and story content types
    _openchurch_profile_create_default_content_types();

    variable_set('theme_default', 'openchurch');//set openchurch to default

    db_query("UPDATE {blocks} SET status = 0, region = ''"); // disable all DB blocks

    //update theme settings to some sensible defaults
    variable_set('theme_openchurch_settings', unserialize('a:35:{s:11:"toggle_logo";i:1;s:11:"toggle_name";i:1;s:13:"toggle_slogan";i:0;s:24:"toggle_node_user_picture";i:0;s:27:"toggle_comment_user_picture";i:0;s:13:"toggle_search";i:1;s:14:"toggle_favicon";i:1;s:20:"toggle_primary_links";i:1;s:22:"toggle_secondary_links";i:1;s:12:"default_logo";i:1;s:9:"logo_path";s:0:"";s:11:"logo_upload";s:0:"";s:15:"default_favicon";i:1;s:12:"favicon_path";s:0:"";s:14:"favicon_upload";s:0:"";s:10:"theme_grid";s:10:"grid12-960";s:16:"fluid_grid_width";s:9:"fluid-100";s:14:"sidebar_layout";s:18:"sidebars-both-last";s:19:"sidebar_first_width";s:1:"2";s:18:"sidebar_last_width";s:1:"3";s:10:"theme_font";s:4:"none";s:15:"theme_font_size";s:12:"font-size-12";s:21:"primary_menu_dropdown";i:1;s:18:"breadcrumb_display";i:1;s:14:"search_snippet";i:1;s:16:"search_info_type";i:1;s:16:"search_info_user";i:1;s:16:"search_info_date";i:1;s:19:"search_info_comment";i:1;s:18:"search_info_upload";i:1;s:24:"user_notverified_display";i:1;s:17:"block_config_link";i:1;s:9:"grid_mask";i:0;s:16:"rebuild_registry";i:0;s:13:"fix_css_limit";i:0;}'));
    variable_set('theme_settings', unserialize('a:30:{s:11:"toggle_logo";i:1;s:11:"toggle_name";i:1;s:13:"toggle_slogan";i:0;s:14:"toggle_mission";i:1;s:24:"toggle_node_user_picture";i:0;s:27:"toggle_comment_user_picture";i:0;s:13:"toggle_search";i:1;s:14:"toggle_favicon";i:1;s:20:"toggle_primary_links";i:1;s:22:"toggle_secondary_links";i:1;s:33:"toggle_node_info_openchurch_block";i:0;s:32:"toggle_node_info_openchurch_blog";i:0;s:36:"toggle_node_info_openchurch_bulletin";i:0;s:35:"toggle_node_info_openchurch_charity";i:0;s:33:"toggle_node_info_openchurch_event";i:0;s:35:"toggle_node_info_openchurch_gallery";i:0;s:44:"toggle_node_info_openchurch_homepage_rotator";i:0;s:33:"toggle_node_info_openchurch_image";i:0;s:36:"toggle_node_info_openchurch_ministry";i:0;s:21:"toggle_node_info_page";i:0;s:22:"toggle_node_info_panel";i:0;s:35:"toggle_node_info_openchurch_podcast";i:0;s:33:"toggle_node_info_openchurch_staff";i:0;s:24:"toggle_node_info_webform";i:0;s:12:"default_logo";i:1;s:9:"logo_path";s:0:"";s:11:"logo_upload";s:0:"";s:15:"default_favicon";i:1;s:12:"favicon_path";s:0:"";s:14:"favicon_upload";s:0:"";}'));

   // Rebuild key tables/caches
    drupal_flush_all_caches();

    // Get out of this batch and let the installer continue
    $task = 'profile-finished';
  }

  return $output;
}

/**
 * Finished callback for the modules install batch.
 *
 * Advance installer task to language import.
 */
function _openchurch_profile_batch_finished($success, $results) {
  variable_set('install_task', 'openchurch-configure');
}

/**
 * Create story and page content types
 */
function _openchurch_profile_create_default_content_types(){
  // Insert default user-defined node types into the database. For a complete
  // list of available node type attributes, refer to the node type API
  // documentation at: http://api.drupal.org/api/HEAD/function/hook_node_info.
  $types = array(
    array(
      'type' => 'page',
      'name' => st('Page'),
      'module' => 'node',
      'description' => st("A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site's initial home page."),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
      'help' => '',
      'min_word_count' => '',
    ),
    array(
      'type' => 'story',
      'name' => st('Story'),
      'module' => 'node',
      'description' => st("A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site's initial home page, and provides the ability to post comments."),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
      'help' => '',
      'min_word_count' => '',
    ),
  );

  foreach ($types as $type) {
    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);
  }

  // Default page to not be promoted and have comments disabled.
  variable_set('node_options_page', array('status'));
  variable_set('comment_page', COMMENT_NODE_DISABLED);

  // Don't display date and author information for page nodes by default.
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_page'] = FALSE;
  variable_set('theme_settings', $theme_settings);

  // Update the menu router information.
  menu_rebuild();
}