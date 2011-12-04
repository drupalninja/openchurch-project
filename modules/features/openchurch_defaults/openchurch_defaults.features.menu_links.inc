<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_defaults_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
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
    'weight' => '-50',
  );
  // Exported menu link: secondary-links:node/177
  $menu_links['secondary-links:node/177'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/177',
    'router_path' => 'node/%',
    'link_title' => 'Image Acknowledgements',
    'options' => array(
      'attributes' => array(
        'title' => 'Image Acknowledgements',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Image Acknowledgements');


  return $menu_links;
}
