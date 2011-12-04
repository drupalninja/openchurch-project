<?php

/**
 * Implementation of hook_content_default_fields().
 */
function openchurch_events_content_default_fields() {
  $fields = array();

  // Exported field: field_oc_cost
  $fields['openchurch_event-field_oc_cost'] = array(
    'field_name' => 'field_oc_cost',
    'type_name' => 'openchurch_event',
    'display_settings' => array(
      'weight' => 0,
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '15',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_oc_cost][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cost',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_oc_dates
  $fields['openchurch_event-field_oc_dates'] = array(
    'field_name' => 'field_oc_dates',
    'type_name' => 'openchurch_event',
    'display_settings' => array(
      'weight' => '-3',
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
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
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
      'label' => 'When',
      'weight' => '-2',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_oc_downloads
  $fields['openchurch_event-field_oc_downloads'] = array(
    'field_name' => 'field_oc_downloads',
    'type_name' => 'openchurch_event',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'pdf doc docx txt',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Related Downloads',
      'weight' => '2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_oc_location
  $fields['openchurch_event-field_oc_location'] = array(
    'field_name' => 'field_oc_location',
    'type_name' => 'openchurch_event',
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
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
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
      ),
      'default_value_php' => NULL,
      'label' => 'Where',
      'weight' => '1',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_oc_ministry
  $fields['openchurch_event-field_oc_ministry'] = array(
    'field_name' => 'field_oc_ministry',
    'type_name' => 'openchurch_event',
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
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_oc_url
  $fields['openchurch_event-field_oc_url'] = array(
    'field_name' => 'field_oc_url',
    'type_name' => 'openchurch_event',
    'display_settings' => array(
      'weight' => '-1',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => 'Register for this event online!',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Register URL',
      'weight' => '-1',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cost');
  t('Ministry');
  t('Register URL');
  t('Related Downloads');
  t('When');
  t('Where');

  return $fields;
}
