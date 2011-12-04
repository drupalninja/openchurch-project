<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function openchurch_staff_taxonomy_default_vocabularies() {
  return array(
    'openchurch_staff_type' => array(
      'name' => 'Staff Type',
      'description' => 'Church staff',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'openchurch_staff',
      'weight' => '0',
      'nodes' => array(
        'openchurch_staff' => 'openchurch_staff',
      ),
    ),
  );
}
