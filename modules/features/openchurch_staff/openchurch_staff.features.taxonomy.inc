<?php
/**
 * @file
 * openchurch_staff.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openchurch_staff_taxonomy_default_vocabularies() {
  return array(
    'openchurch_staff_type' => array(
      'name' => 'Staff Type',
      'machine_name' => 'openchurch_staff_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
