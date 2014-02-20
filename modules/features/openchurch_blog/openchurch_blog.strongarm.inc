<?php
/**
 * @file
 * openchurch_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openchurch_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_openchurch_blog';
  $strongarm->value = 0;
  $export['comment_anonymous_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_openchurch_blog';
  $strongarm->value = 1;
  $export['comment_default_mode_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_openchurch_blog';
  $strongarm->value = '50';
  $export['comment_default_per_page_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_openchurch_blog';
  $strongarm->value = 1;
  $export['comment_form_location_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_openchurch_blog';
  $strongarm->value = '2';
  $export['comment_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_openchurch_blog';
  $strongarm->value = '1';
  $export['comment_preview_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_openchurch_blog';
  $strongarm->value = 1;
  $export['comment_subject_field_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_openchurch_blog';
  $strongarm->value = '0';
  $export['language_content_type_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_openchurch_blog';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_openchurch_blog';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_openchurch_blog';
  $strongarm->value = '0';
  $export['node_preview_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_openchurch_blog';
  $strongarm->value = 1;
  $export['node_submitted_openchurch_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_blog_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_openchurch_blog_pattern'] = $strongarm;

  return $export;
}
