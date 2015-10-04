<?php
/**
 * @file
 * basic_structure.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function basic_structure_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_70a97596-c5fe-456a-978a-3c2701010c6d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Home Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d22643a-6a2a-4468-91bd-0a3948e709fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f826133-4302-46b5-82ce-65f63b9821a6';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5f826133-4302-46b5-82ce-65f63b9821a6';
    $display->content['new-5f826133-4302-46b5-82ce-65f63b9821a6'] = $pane;
    $display->panels['middle'][0] = 'new-5f826133-4302-46b5-82ce-65f63b9821a6';
    $pane = new stdClass();
    $pane->pid = 'new-a3be2597-3ed2-489c-88cc-1b25a4f3f607';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_pages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a3be2597-3ed2-489c-88cc-1b25a4f3f607';
    $display->content['new-a3be2597-3ed2-489c-88cc-1b25a4f3f607'] = $pane;
    $display->panels['middle'][1] = 'new-a3be2597-3ed2-489c-88cc-1b25a4f3f607';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5f826133-4302-46b5-82ce-65f63b9821a6';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_70a97596-c5fe-456a-978a-3c2701010c6d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_db1aa6d7-1c3b-4ded-a520-f6565860dacd';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '50aa650e-77a1-4fa7-845f-d01b30c4668e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2715d7cd-9f64-4bae-9a5b-082560402b19';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2715d7cd-9f64-4bae-9a5b-082560402b19';
    $display->content['new-2715d7cd-9f64-4bae-9a5b-082560402b19'] = $pane;
    $display->panels['middle'][0] = 'new-2715d7cd-9f64-4bae-9a5b-082560402b19';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_db1aa6d7-1c3b-4ded-a520-f6565860dacd'] = $handler;

  return $export;
}
