<?php

/**
 * Implementation of hook_default_panels_layout().
 */
function openchurch_staff_default_panels_layout() {
  $export = array();
  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'openchurch_staff_list';
  $layout->admin_title = 'Staff Page';
  $layout->admin_description = 'Staff list page.';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'oc-staff-page',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'staff_image',
          1 => 'jump_to_a_ministry',
        ),
        'parent' => 'main',
        'class' => 'oc-staff-top',
      ),
      'staff_image' => array(
        'type' => 'region',
        'title' => 'Staff Image',
        'width' => '49.998348626148946',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'oc-staff-image',
      ),
      'jump_to_a_ministry' => array(
        'type' => 'region',
        'title' => 'Jump to a Ministry',
        'width' => '50.001651373851054',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'oc-jump-to-ministry',
      ),
    ),
  );

  $export['openchurch_staff_list'] = $layout;
  return $export;
}
