<?php

/**
 * Implementation of hook_user_default_roles().
 */
function openchurch_defaults_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  // Exported role: site admin
  $roles['site admin'] = array(
    'name' => 'site admin',
  );

  return $roles;
}
