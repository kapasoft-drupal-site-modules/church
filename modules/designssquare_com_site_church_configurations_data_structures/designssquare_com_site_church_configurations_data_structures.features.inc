<?php
/**
 * @file
 * designssquare_com_site_church_configurations_data_structures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function designssquare_com_site_church_configurations_data_structures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function designssquare_com_site_church_configurations_data_structures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function designssquare_com_site_church_configurations_data_structures_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event'),
      'help' => '',
    ),
  );
  return $items;
}
