<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_bulletin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:bulletins
  $menu_links['primary-links:bulletins'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'bulletins',
    'router_path' => 'bulletins',
    'link_title' => 'Weekly Bulletin Archives',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'podcasts',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Weekly Bulletin Archives');


  return $menu_links;
}
