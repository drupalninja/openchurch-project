<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function openchurch_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:events
  $menu_links['primary-links:events'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
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
    'weight' => '-46',
  );
  // Exported menu link: primary-links:events/calendar
  $menu_links['primary-links:events/calendar'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'events/calendar',
    'router_path' => 'events/calendar',
    'link_title' => 'Event Calendar',
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
    'weight' => '4',
    'parent_path' => 'events',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Event Calendar');
  t('Events');


  return $menu_links;
}
