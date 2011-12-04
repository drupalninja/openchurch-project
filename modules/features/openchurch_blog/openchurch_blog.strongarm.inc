<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_openchurch_blog';
  $strongarm->value = '0';

  $export['language_content_type_openchurch_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_blog_pattern';
  $strongarm->value = 'blog/[title-raw]';

  $export['pathauto_node_openchurch_blog_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_blog';
  $strongarm->value = '0';

  $export['upload_openchurch_blog'] = $strongarm;
  return $export;
}
