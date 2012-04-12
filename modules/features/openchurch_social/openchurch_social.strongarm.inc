<?php
/**
 * @file
 * openchurch_social.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openchurch_social_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_button_option';
  $strongarm->value = 'stbc_large';
  $export['sharethis_button_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_location';
  $strongarm->value = 'block';
  $export['sharethis_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_node_option';
  $strongarm->value = 'page,0,0,0,0,0,0,0,0,0,0,0';
  $export['sharethis_node_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_extras';
  $strongarm->value = array(
    'Google Plus One:plusone' => 0,
    'Facebook Like:fblike' => 0,
  );
  $export['sharethis_option_extras'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_service_option';
  $strongarm->value = '"Tweet:twitter","Facebook:facebook","Google +1:googleplus","ShareThis:sharethis"';
  $export['sharethis_service_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_teaser_option';
  $strongarm->value = 1;
  $export['sharethis_teaser_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_twitter_suffix';
  $strongarm->value = '';
  $export['sharethis_twitter_suffix'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_widget_option';
  $strongarm->value = 'st_multi';
  $export['sharethis_widget_option'] = $strongarm;

  return $export;
}
