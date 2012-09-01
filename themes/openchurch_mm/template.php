<?php

/**
 * Page preprocessing
 */
function openchurch_mm_preprocess_page(&$vars) {
  
  /**
   * Embed superfish menu
   */
  $block = block_load('superfish',1);
  $block->title = '<none>';
  
  $renderable_block= _block_get_renderable_array(_block_render_blocks(array($block)));
  
  //echo '<pre>';
  //print_r($renderable_block);die;
  
  $vars['page']['main_menu'] = array('system_main-menu' => array(
    'content' => $renderable_block['superfish_1']),
    '#sorted' => 1,
    'context' => array('#markup' => ''),
    '#theme_wrappers' => array(array('region')),
    '#region' => 'main_menu',
  );
}

/**
 * HTML preprocessing
 */
function openchurch_mm_preprocess_html(&$vars) {
  global $theme_key;

  $themes = fusion_core_theme_paths($theme_key);
  
  //Grid file
  $file = theme_get_setting('theme_grid') . '.css';
  
  //Grid path
  $path = $themes['fusion_core'];
  
  /**
   * We are forcing the normal grid CSS to load via an IE conditional, even if repsonsive is enabled, this fixes an IE problem
   */
  drupal_add_css($path . '/css/' . $file, array('basename' => 'fusion_core' . '-' . $file, 'group' => CSS_THEME, 'preprocess' => TRUE, 'browsers' => array('IE' => TRUE, '!IE' => FALSE)));
  
  /**
   * Add ie7 stylesheet 
   */
  drupal_add_css(path_to_theme().'/css/openchurch-ie7.css', array('browsers' => array('IE' => TRUE, '!IE' => FALSE)));
  
  /**
   * Add gt-ie7 stylesheet
   */
  drupal_add_css(path_to_theme().'/css/openchurch-gt-ie7.css', array('browsers' => array('IE' => TRUE, '!IE' => FALSE)));
}