<?php
/**
 * @file
 * openchurch_defaults.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function openchurch_defaults_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Building Maintenance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '1a1eaed6-4ed7-6064-b1c6-1bd8a8d0eb9a',
  );
  $terms[] = array(
    'name' => 'Elder',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '5dffecde-4e64-37e4-0dbd-5d2a63d210c3',
  );
  $terms[] = array(
    'name' => 'Adult Ministry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '5f6e731e-3d22-7364-ada7-5c28f89189da',
  );
  $terms[] = array(
    'name' => 'Administrative Minister',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '6ec8de9c-c662-84a4-69bb-b67d090b8163',
  );
  $terms[] = array(
    'name' => 'Administrative Staff',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '77e5ae95-a1f6-f324-01f8-90d10833c3b8',
  );
  $terms[] = array(
    'name' => 'Youth Ministry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '83e6d2da-1e78-f144-013f-ec50b2be919e',
  );
  $terms[] = array(
    'name' => 'Counseling Center',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '8b398ad2-2739-d3c4-896e-6b845a4d4a6f',
  );
  $terms[] = array(
    'name' => 'Pulpit Minister',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '8cb9444e-5105-dde4-2925-81bca7fd7201',
  );
  $terms[] = array(
    'name' => 'Children\'s Ministry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => '9030eb22-e101-b854-75b5-a2bf3c8458f6',
  );
  $terms[] = array(
    'name' => 'Uncategorized',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_blog_topic',
    'metatags' => array(),
    'uuid' => '9ac3873c-f6b6-a274-e9d8-0952a46ccd5b',
  );
  $terms[] = array(
    'name' => 'College Ministry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_staff_type',
    'metatags' => array(),
    'uuid' => 'ad43dfaa-5ef4-27e4-a5a0-23b2bea5d99e',
  );
  $terms[] = array(
    'name' => 'Weekly Newsletters',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'vocabulary_machine_name' => 'openchurch_blog_topic',
    'metatags' => array(),
    'uuid' => 'f6606295-46b0-d034-158b-4438d74f9492',
  );
  return $terms;
}
