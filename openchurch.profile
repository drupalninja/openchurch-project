<?php

/**
 * Implements hook_form_alter().
 */
function openchurch_form_alter(&$form, &$form_state, $form_id) {
  // Add placeholder to search box
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#attributes']['placeholder'] = 'Search';
  }
}