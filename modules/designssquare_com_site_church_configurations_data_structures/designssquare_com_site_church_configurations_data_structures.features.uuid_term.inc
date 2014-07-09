<?php
/**
 * @file
 * designssquare_com_site_church_configurations_data_structures.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function designssquare_com_site_church_configurations_data_structures_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Mineapoles Dvēsele',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1fd530f8-d0a3-4349-b050-ac39b41a90fa',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Jaunatne',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3687df3b-31f0-4889-80d0-3fc8ec2a7f98',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'Informācijas Avots',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6718abb1-0d1d-49b4-9bc2-49f1e3bbdd45',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'Mūzika',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6d63763e-4333-4235-8572-066c48c55296',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'LELBA',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7729daa8-5f36-4ec6-8c28-a17ac291e512',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Informatīvs',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '78e3dd9f-9ce9-44b4-9d51-daa286031bce',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
