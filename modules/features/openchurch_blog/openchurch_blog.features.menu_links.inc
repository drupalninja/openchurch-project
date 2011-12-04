<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:blog
  $menu_links['primary-links:blog'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-42',
  );
  // Exported menu link: primary-links:blog/archives
  $menu_links['primary-links:blog/archives'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'blog/archives',
    'router_path' => 'blog/archives',
    'link_title' => 'Blog Archives',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'blog',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Blog Archives');


  return $menu_links;
}
