<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_bulletin_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_openchurch_bulletin';
  $strongarm->value = 0;

  $export['comment_anonymous_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_openchurch_bulletin';
  $strongarm->value = '3';

  $export['comment_controls_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_openchurch_bulletin';
  $strongarm->value = '4';

  $export['comment_default_mode_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_openchurch_bulletin';
  $strongarm->value = '1';

  $export['comment_default_order_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_openchurch_bulletin';
  $strongarm->value = '50';

  $export['comment_default_per_page_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_openchurch_bulletin';
  $strongarm->value = '0';

  $export['comment_form_location_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_openchurch_bulletin';
  $strongarm->value = '0';

  $export['comment_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_openchurch_bulletin';
  $strongarm->value = '1';

  $export['comment_preview_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_openchurch_bulletin';
  $strongarm->value = '1';

  $export['comment_subject_field_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_bulletin';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-1',
    'path' => '4',
    'print' => '5',
    'nodewords' => '0',
  );

  $export['content_extra_weights_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_bulletin';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_bulletin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_bulletin_pattern';
  $strongarm->value = 'media/bulletins/[title-raw]';

  $export['pathauto_node_openchurch_bulletin_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_bulletin';
  $strongarm->value = '0';

  $export['upload_openchurch_bulletin'] = $strongarm;
  return $export;
}
