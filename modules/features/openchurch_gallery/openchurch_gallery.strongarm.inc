<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_gallery';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '4',
    'author' => '5',
    'options' => '6',
    'menu' => '2',
    'path' => '8',
    'print' => '7',
    'nodewords' => '3',
  );

  $export['content_extra_weights_openchurch_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_gallery_pattern';
  $strongarm->value = 'media/galleries/[title-raw]';

  $export['pathauto_node_openchurch_gallery_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_gallery';
  $strongarm->value = '0';

  $export['upload_openchurch_gallery'] = $strongarm;
  return $export;
}
