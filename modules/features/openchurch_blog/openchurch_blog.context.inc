<?php
/**
 * @file
 * openchurch_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openchurch_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openchurch-blog-breadcrumbs';
  $context->description = 'OpenChurch Blog Breadcrumbs';
  $context->tag = 'breadcrumbs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'openchurch_blog' => 'openchurch_blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blog',
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => '',
      'breadcrumb_show_current_page_only' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenChurch Blog Breadcrumbs');
  t('breadcrumbs');
  $export['openchurch-blog-breadcrumbs'] = $context;

  return $export;
}
