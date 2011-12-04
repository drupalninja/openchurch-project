<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_staff_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:about/staff
  $menu_links['primary-links:about/staff'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/staff',
    'router_path' => 'about/staff',
    'link_title' => 'Staff Directory',
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
    'weight' => '0',
    'parent_path' => 'about',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Staff Directory');


  return $menu_links;
}
