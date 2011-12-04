<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_ministry_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:ministries
  $menu_links['primary-links:ministries'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'ministries',
    'router_path' => 'ministries',
    'link_title' => 'Ministries',
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
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ministries');


  return $menu_links;
}
