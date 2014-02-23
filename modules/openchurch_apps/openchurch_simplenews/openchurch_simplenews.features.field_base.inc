<?php
/**
 * @file
 * openchurch_simplenews.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openchurch_simplenews_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_simplenews_term'
  $field_bases['field_simplenews_term'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_simplenews_term',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'parent' => 0,
          'vocabulary' => 'newsletter',
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
