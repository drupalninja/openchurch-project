<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_image_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_image';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'menu' => '-3',
    'path' => '3',
    'itunes' => '-1',
    'nodewords' => '-2',
  );

  $export['content_extra_weights_openchurch_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_openchurch_image';
  $strongarm->value = '0';

  $export['language_content_type_openchurch_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_image';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_image_pattern';
  $strongarm->value = 'image[title-raw]';

  $export['pathauto_node_openchurch_image_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_image';
  $strongarm->value = '0';

  $export['upload_openchurch_image'] = $strongarm;
  return $export;
}
