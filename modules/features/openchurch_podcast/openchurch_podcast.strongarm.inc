<?php

/**
 * Implementation of hook_strongarm().
 */
function openchurch_podcast_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_openchurch_podcast';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'menu' => '0',
    'path' => '5',
    'print' => '6',
    'nodewords' => '1',
  );

  $export['content_extra_weights_openchurch_podcast'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_openchurch_podcast';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_openchurch_podcast'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_openchurch_podcast_pattern';
  $strongarm->value = 'media/podcasts/[title-raw]';

  $export['pathauto_node_openchurch_podcast_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_embed_method';
  $strongarm->value = 'swfobject2_replace';

  $export['swftools_embed_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_mp3_display';
  $strongarm->value = 'onepixelout';

  $export['swftools_mp3_display'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_onepixelout';
  $strongarm->value = array(
    'autostart' => 'no',
    'loop' => 'no',
    'bg' => '',
    'leftbg' => '',
    'rightbg' => '',
    'rightbghover' => '',
    'lefticon' => '',
    'righticon' => '',
    'righticonhover' => '',
    'text' => '',
    'slider' => '',
    'loader' => '',
    'track' => '',
    'border' => '',
  );

  $export['swftools_onepixelout'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_openchurch_podcast';
  $strongarm->value = '0';

  $export['upload_openchurch_podcast'] = $strongarm;
  return $export;
}
