<?php

/**
 * Fixing empty breadcrumb issue
 */
function openchurch_mm_breadcrumb($breadcrumb) {
  if (!empty($breadcrumb) AND !empty($breadcrumb[0])) {
    return '<div class="breadcrumb">' . implode(' › ', $breadcrumb) . '</div>';
  }
}

/**
 * Block preprocessing
 */
function openchurch_mm_preprocess_block(&$vars) {

  /**
   * We are going to add an edit link for blocks
   */
  if ($vars['block']->module == 'openchurch_block') {
    global $user;

    /**
     * We are going to add a hidden edit link, we will use js to append to fusion links, if not using fusion,
     * then this can be rendered a different way
     */
    if (module_exists('openchurch_block') AND (user_access('administer nodes', $user) OR user_access('edit any openchurch_block content', $user) OR
       (user_access('edit own openchurch_block content', $user) AND $user->uid == $vars['node']->uid))) {

      /**
       * Determine block nid by looking up the block delta, this is not the preferred way
       * of retrieving it but otherwise it is difficult to tie the block to the actual node
       */
      $block_nid = db_result(db_query('SELECT n.nid ' .
        'FROM {content_type_openchurch_block} c ' .
        'JOIN {node} n ON (n.nid = c.nid AND n.vid = c.vid) WHERE field_oc_machine_name_value = "%s"', $vars['block']->delta));

      if ($block_nid) {
        //construct edit block link
        $edit_block_link = l('edit block', 'node/'.$block_nid.'/edit', array(
          'query' => 'destination='.$_GET['q'],
          'attributes' => array('title' => 'edit this block', 'class' => 'fusion-block-edit')
        ));

        //append to fusion block links
        $vars['edit_links'] = str_replace('</div>', $edit_block_link.'</div>', $vars['edit_links']);
      }
    }
  }
}