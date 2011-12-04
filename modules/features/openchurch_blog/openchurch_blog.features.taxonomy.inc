<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function openchurch_blog_taxonomy_default_vocabularies() {
  return array(
    'openchurch_blog_topic' => array(
      'name' => 'Blog Topic',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'openchurch_blog',
      'weight' => '0',
      'nodes' => array(
        'openchurch_blog' => 'openchurch_blog',
      ),
    ),
  );
}
