<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_ministry_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_ministry';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'menu' => '0',
    'path' => '6',
    'print' => '5',
    'nodewords' => '1',
  );

  $export['content_extra_weights_openchurch_ministry'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_ministry';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_ministry'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_ministry_pattern';
  $strongarm->value = 'ministry/[title-raw]';

  $export['pathauto_node_openchurch_ministry_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_ministry';
  $strongarm->value = '0';

  $export['upload_openchurch_ministry'] = $strongarm;
  return $export;
}
