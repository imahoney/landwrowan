<?php
/**
 * @file
 * basic_structure.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function basic_structure_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_date'
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 0,
            'city' => 0,
            'coords' => 0,
            'country' => 0,
            'country_name' => 0,
            'locpick' => 0,
            'map_link' => 0,
            'name' => 0,
            'postal_code' => 0,
            'province' => 0,
            'province_name' => 0,
            'street' => 0,
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 6,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 8,
            ),
            'country' => array(
              'collect' => 1,
              'default' => 'us',
              'weight' => 14,
            ),
            'locpick' => array(
              'collect' => 1,
              'weight' => 20,
            ),
            'name' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 2,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 12,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 10,
              'widget' => 'autocomplete',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 4,
            ),
          ),
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  return $field_bases;
}
