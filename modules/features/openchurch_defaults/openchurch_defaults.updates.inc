<?php

/**
 * Adding date formats.
 */
function openchurch_defaults_update_7000(&$sandbox){
  /**
   * Add custom date
   * 
   * @see http://drupal.org/node/1463464
   */
  db_query('INSERT INTO {date_format_type} VALUES (:type, :title, 0)', array(':type' => 'openchurch_short_date', ':title' => 'OpenChurch Short Date'));
  
  db_query('INSERT INTO {date_formats} VALUES (NULL, :format, :type, 0)', array(':format' => 'm.d.y', ':type' => 'short'));
  
  variable_set('date_format_openchurch_short_date', 'm.d.y');
  
  $sandbox['#finished'] = 1;
  
  return t('Adding date formats.');
}

/**
 * Enabling Media filter for full html text format.
 */
function openchurch_defaults_update_7001(&$sandbox){
  // Add text formats.
  $full_html_format = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'weight' => 0,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // Line break filter.
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
      'media_filter' => array(
        'weight' => 11,
        'status' => 1,
      ),
    ),
  );
  $full_html_format = (object) $full_html_format;
  filter_format_save($full_html_format);
  
  $sandbox['#finished'] = 1;
  
  return t('Media filter has been enabled for full html text format.');
}

/**
 * Adding video menu link under the Media dropdown.
 */
function openchurch_defaults_update_7002(&$sandbox){
  
  $video_mlid = db_query('SELECT mlid FROM {menu_links} WHERE link_path = :link_path', array(':link_path' => 'multimedia/video'))->fetchColumn();
  
  /**
   * Make sure we don't have a video menu link already 
   */
  if (!$video_mlid){
    $media_mlid = db_query('SELECT mlid FROM {menu_links} WHERE link_path = :link_path AND plid = 0', array(':link_path' => 'multimedia/galleries'))->fetchColumn();

    if ($media_mlid){
      $item = array(
        'link_title' => t('Video Archives'),
        'link_path' => 'multimedia/video',
        'menu_name' => 'main-menu',
        'weight' => -98,
        'weight' => 0,
        'customized' => 1,
        'module'     => 'openchurch_defaults',
        'plid' => $media_mlid,
      );

      menu_link_save($item);
    }
  }
  
  $sandbox['#finished'] = 1;
  
  return t('Added video menu link under the Media dropdown. You may need to clear caches for this to take effect.');
}

/**
 * Updating mix and match settings.
 */
function openchurch_defaults_update_7003(&$sandbox){
  
  /**
   * Load fusion skin info for site blocks and save
   */
  $xml = simplexml_load_file(drupal_get_path('module', 'openchurch_defaults').'/fusion_block.xml');

  $json = json_encode($xml);
  $array = json_decode($json, TRUE);

  /**
   * * Load fusion skin info for site blocks and save
   */
  foreach (array('openchurch_theme_starter') as $theme){
    foreach($array['database']['table_data']['row'] as $row){

      $row = $row['field'];

      $skin = array(
        'theme' => $theme,
        'module' => $row[2],
        'element' => $row[3],
        'skin' => $row[4],
        'options' => unserialize($row[5]),
        'status' => $row[6],
      );

      drupal_write_record('fusion_apply_skins', $skin);
    }
  }
  
  /**
   * Load fusion skin info for site blocks and save
   */
  $xml = simplexml_load_file(drupal_get_path('module', 'openchurch_defaults').'/mm_block.xml');

  $json = json_encode($xml);
  $array = json_decode($json, TRUE);

  foreach($array['database']['table_data']['row'] as $row){
    $row = $row['field'];

    $skin = array(
      'theme' => 'openchurch_mm',
      'module' => $row[2],
      'element' => $row[3],
      'skin' => $row[4],
      'options' => unserialize($row[5]),
      'status' => $row[6],
    );

    drupal_write_record('fusion_apply_skins', $skin);
  }
  
  $sandbox['#finished'] = 1;
  
  return t('Updated mix and match settings, openchurch starter theme settings.');
}