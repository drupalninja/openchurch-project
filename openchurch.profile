<?php

/**
 * Implements hook_appstore_stores_info
 */
function openchurch_apps_servers_info() {
  $info =  drupal_parse_info_file(dirname(__file__) . '/openchurch.info');

  return array(
    'openchurch' => array(
      'title' => 'OpenChurch',
      'description' => "Apps for the OpenChurch distribution",
      'manifest' => url('', array('absolute' => TRUE)). 'profiles/openchurch/apps.js',
      'profile' => 'openchurch',
      'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-dev',
      'server_name' => $_SERVER['SERVER_NAME'],
      'server_ip' => $_SERVER['SERVER_ADDR'],
    ),
  );
}
