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