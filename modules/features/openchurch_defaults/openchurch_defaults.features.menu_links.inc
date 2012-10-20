<?php
/**
 * @file
 * openchurch_defaults.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openchurch_defaults_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-openchurch-admin-links:admin/appearance/settings/openchurch_theme
  $menu_links['menu-openchurch-admin-links:admin/appearance/settings/openchurch_theme'] = array(
    'menu_name' => 'menu-openchurch-admin-links',
    'link_path' => 'admin/appearance/settings/openchurch_theme',
    'router_path' => 'admin/appearance/settings/openchurch_theme',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust site theme settings',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-openchurch-admin-links:admin/apps
  $menu_links['menu-openchurch-admin-links:admin/apps'] = array(
    'menu_name' => 'menu-openchurch-admin-links',
    'link_path' => 'admin/apps',
    'router_path' => 'admin/apps',
    'link_title' => 'Apps',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable / Disable Installed Apps',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-openchurch-admin-links:admin/config/system/site-information
  $menu_links['menu-openchurch-admin-links:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-openchurch-admin-links',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site Information',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust sitewide settings',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-openchurch-admin-links:admin/structure/menu
  $menu_links['menu-openchurch-admin-links:admin/structure/menu'] = array(
    'menu_name' => 'menu-openchurch-admin-links',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
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
    'weight' => '0',
  );
  // Exported menu link: menu-openchurch-new-content:node/add/page
  $menu_links['menu-openchurch-new-content:node/add/page'] = array(
    'menu_name' => 'menu-openchurch-new-content',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-openchurch-new-content:node/add/webform
  $menu_links['menu-openchurch-new-content:node/add/webform'] = array(
    'menu_name' => 'menu-openchurch-new-content',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
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
  t('Appearance');
  t('Apps');
  t('Basic Page');
  t('Menus');
  t('Site Information');
  t('Webform');


  return $menu_links;
}
