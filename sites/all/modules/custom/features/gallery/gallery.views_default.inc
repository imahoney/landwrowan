<?php
/**
 * @file
 * gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  /* Field: Image (full, in colorbox) */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['ui_name'] = 'Image (full, in colorbox)';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<div class=\'gal-image-full\'>[field_gallery_image_1]</div>
<div class=\'gal-caption\'>[field_caption]</div>';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '';
  $handler->display->display_options['fields']['colorbox']['height'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );
  /* Filter criterion: Content: Tags (field_gallery_tags) */
  $handler->display->display_options['filters']['field_gallery_tags_tid']['id'] = 'field_gallery_tags_tid';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['table'] = 'field_data_field_gallery_tags';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['field'] = 'field_gallery_tags_tid';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gallery_tags_tid']['expose']['operator_id'] = 'field_gallery_tags_tid_op';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['expose']['label'] = 'Tags (field_gallery_tags)';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['expose']['operator'] = 'field_gallery_tags_tid_op';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['expose']['identifier'] = 'field_gallery_tags_tid';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_gallery_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_gallery_tags_tid']['hierarchy'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['image_gallery'] = $view;

  return $export;
}
