<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_events_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_event';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '3',
    'revision_information' => '6',
    'author' => '7',
    'options' => '8',
    'menu' => '4',
    'path' => '10',
    'print' => '9',
    'nodewords' => '5',
  );

  $export['content_extra_weights_openchurch_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_openchurch_event';
  $strongarm->value = '0';

  $export['language_content_type_openchurch_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_event_pattern';
  $strongarm->value = 'events/[title-raw]';

  $export['pathauto_node_openchurch_event_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_event';
  $strongarm->value = '0';

  $export['upload_openchurch_event'] = $strongarm;
  return $export;
}
