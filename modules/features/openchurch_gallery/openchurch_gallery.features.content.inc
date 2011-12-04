<?php

/**
 * Implementation of hook_content_default_fields().
 */
function openchurch_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_oc_date
  $fields['openchurch_gallery-field_oc_date'] = array(
    'field_name' => 'field_oc_date',
    'type_name' => 'openchurch_gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - g:ia',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-3',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_oc_images
  $fields['openchurch_gallery-field_oc_images'] = array(
    'field_name' => 'field_oc_images',
    'type_name' => 'openchurch_gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/gallery',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Gallery Image',
      'weight' => 0,
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_oc_location
  $fields['openchurch_gallery-field_oc_location'] = array(
    'field_name' => 'field_oc_location',
    'type_name' => 'openchurch_gallery',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '0',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '4',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'country' => 'country',
          'locpick' => 'locpick',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'province_name' => 0,
          'coords' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'drupal',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '2',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '4',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '6',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '8',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '10',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '12',
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => '4',
                  'weight' => '14',
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => '0',
                  'weight' => '20',
                  'nodiff' => TRUE,
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'name' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 2,
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 4,
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 6,
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 8,
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 10,
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 12,
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => 1,
                          'weight' => 14,
                        ),
                        'locpick' => array(
                          'default' => FALSE,
                          'collect' => 1,
                          'weight' => 20,
                          'nodiff' => TRUE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'country' => 'country',
                'locpick' => 'locpick',
                'country_name' => 'country_name',
                'map_link' => 'map_link',
                'name' => 0,
                'street' => 0,
                'additional' => 0,
                'city' => 0,
                'province' => 0,
                'postal_code' => 0,
                'province_name' => 0,
                'coords' => 0,
              ),
            ),
          ),
          'country' => 'us',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-2',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_oc_ministry
  $fields['openchurch_gallery-field_oc_ministry'] = array(
    'field_name' => 'field_oc_ministry',
    'type_name' => 'openchurch_gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'openchurch_ministry' => 'openchurch_ministry',
      'openchurch_block' => 0,
      'openchurch_bulletin' => 0,
      'openchurch_event' => 0,
      'openchurch_gallery' => 0,
      'openchurch_image' => 0,
      'page' => 0,
      'panel' => 0,
      'openchurch_podcast' => 0,
      'openchurch_staff' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ministry',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_oc_thumb
  $fields['openchurch_gallery-field_oc_thumb'] = array(
    'field_name' => 'field_oc_thumb',
    'type_name' => 'openchurch_gallery',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'oc_thumb_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'oc_thumb_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg',
      'file_path' => 'images/event',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Album Cover',
      'weight' => '-1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Album Cover');
  t('Date');
  t('Gallery Image');
  t('Location');
  t('Ministry');

  return $fields;
}
