<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_homepage_rotator_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_homepage_rotator';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-2',
    'path' => '4',
    'attachments' => '5',
    'itunes' => '-1',
    'nodewords' => '0',
  );

  $export['content_extra_weights_openchurch_homepage_rotator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_openchurch_homepage_rotator';
  $strongarm->value = '0';

  $export['language_content_type_openchurch_homepage_rotator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_homepage_rotator';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_openchurch_homepage_rotator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_homepage_rotator_pattern';
  $strongarm->value = 'rotator/[title-raw]';

  $export['pathauto_node_openchurch_homepage_rotator_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_homepage_rotator';
  $strongarm->value = '1';

  $export['upload_openchurch_homepage_rotator'] = $strongarm;
  return $export;
}
