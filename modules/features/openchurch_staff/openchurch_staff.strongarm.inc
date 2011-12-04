<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_staff_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_staff';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '6',
    'author' => '5',
    'options' => '7',
    'menu' => '4',
    'path' => '9',
    'print' => '8',
    'nodewords' => '3',
  );

  $export['content_extra_weights_openchurch_staff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_staff';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_staff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_staff_pattern';
  $strongarm->value = 'about/staff/[title-raw]';

  $export['pathauto_node_openchurch_staff_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_staff';
  $strongarm->value = '0';

  $export['upload_openchurch_staff'] = $strongarm;
  return $export;
}
