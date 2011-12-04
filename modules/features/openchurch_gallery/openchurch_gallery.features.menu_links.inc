<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:galleries
  $menu_links['primary-links:galleries'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'galleries',
    'router_path' => 'galleries',
    'link_title' => 'Photos: Church Wide',
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
    'weight' => '-45',
    'parent_path' => 'podcasts',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Photos: Church Wide');


  return $menu_links;
}
