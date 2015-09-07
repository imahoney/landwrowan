<?php
/**
 * @file
 * gallery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gallery_node_info() {
  $items = array(
    'gallery_image' => array(
      'name' => t('Gallery Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
