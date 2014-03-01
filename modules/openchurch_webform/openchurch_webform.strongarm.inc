<?php
/**
 * @file
 * openchurch_webform.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openchurch_webform_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webform';
  $strongarm->value = '0';
  $export['comment_webform'] = $strongarm;

  return $export;
}
