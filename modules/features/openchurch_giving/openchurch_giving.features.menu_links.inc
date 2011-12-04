<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_giving_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:give
  $menu_links['primary-links:give'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'give',
    'router_path' => 'give',
    'link_title' => 'Give',
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
    'weight' => '-45',
  );
  // Exported menu link: primary-links:http://google.com
  $menu_links['primary-links:http://google.com'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'http://google.com',
    'router_path' => '',
    'link_title' => 'Online Giving System Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'give',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Give');
  t('Online Giving System Login');


  return $menu_links;
}
