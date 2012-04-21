<?php
/**
 * @file
 * openchurch_staff_demo_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_staff_demo_content_content_defaults() {
  $content = array();

  $content['oc_staff1'] = (object) array(
    'exported_path' => 'about/staff/john-smith',
    'title' => 'John Smith',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_staff',
    'language' => 'und',
    'created' => '1323220084',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_staff1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_oc_email' => array(
      'und' => array(
        0 => array(
          'email' => 'test@test.com',
        ),
      ),
    ),
    'field_oc_ministry' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'oc_ministry1',
        ),
      ),
    ),
    'field_oc_phone' => array(
      'und' => array(
        0 => array(
          'value' => '(x113)',
          'format' => NULL,
          'safe_value' => '(x113)',
        ),
      ),
    ),
    'field_oc_position' => array(
      'und' => array(
        0 => array(
          'value' => 'Ministry Assistant',
          'format' => NULL,
          'safe_value' => 'Ministry Assistant',
        ),
      ),
    ),
    'field_oc_staff_type' => array(
      'und' => array(
        0 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

  $content['oc_staff2'] = (object) array(
    'exported_path' => 'about/staff/john-doe',
    'title' => 'John Doe',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_staff',
    'language' => 'und',
    'created' => '1323220049',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_staff2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.
    
    Proin malesuada, lectus vel pulvinar auctor, nulla libero placerat sem, eget tincidunt tellus libero in mi..',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.</p>
  <p>  Proin malesuada, lectus vel pulvinar auctor, nulla libero placerat sem, eget tincidunt tellus libero in mi..</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_oc_email' => array(
      'und' => array(
        0 => array(
          'email' => 'test@test.com',
        ),
      ),
    ),
    'field_oc_ministry' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'oc_ministry1',
        ),
      ),
    ),
    'field_oc_phone' => array(
      'und' => array(
        0 => array(
          'value' => '(x114)',
          'format' => NULL,
          'safe_value' => '(x114)',
        ),
      ),
    ),
    'field_oc_position' => array(
      'und' => array(
        0 => array(
          'value' => 'Ministry Assistant',
          'format' => NULL,
          'safe_value' => 'Ministry Assistant',
        ),
      ),
    ),
    'field_oc_staff_type' => array(
      'und' => array(
        0 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

return $content;
}
