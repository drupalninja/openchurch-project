<?php
/**
 * @file
 * openchurch_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openchurch_blog_taxonomy_default_vocabularies() {
  return array(
    'openchurch_blog_topic' => array(
      'name' => 'Blog Topic',
      'machine_name' => 'openchurch_blog_topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'openchurch_blog',
      'weight' => 0,
    ),
  );
}
