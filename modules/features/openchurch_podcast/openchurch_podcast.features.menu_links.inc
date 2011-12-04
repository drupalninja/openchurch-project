<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_podcast_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:podcasts
  $menu_links['primary-links:podcasts'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'podcasts',
    'router_path' => 'podcasts',
    'link_title' => 'Sermon Audio Archives',
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
    'weight' => '-46',
    'parent_path' => 'podcasts',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sermon Audio Archives');


  return $menu_links;
}
