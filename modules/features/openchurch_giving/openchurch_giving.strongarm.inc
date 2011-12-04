<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_giving_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_charity';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-2',
    'path' => '3',
    'print' => '4',
    'nodewords' => '-1',
  );

  $export['content_extra_weights_openchurch_charity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_openchurch_charity';
  $strongarm->value = '0';

  $export['language_content_type_openchurch_charity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_charity';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_charity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_charity_pattern';
  $strongarm->value = 'charity/[title-raw]';

  $export['pathauto_node_openchurch_charity_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_charity';
  $strongarm->value = '0';

  $export['upload_openchurch_charity'] = $strongarm;
  return $export;
}
