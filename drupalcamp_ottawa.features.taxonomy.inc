<?php
/**
 * @file
 * drupalcamp_ottawa.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalcamp_ottawa_taxonomy_default_vocabularies() {
  return array(
    'sponsorship_level' => array(
      'name' => 'Sponsorship Level',
      'machine_name' => 'sponsorship_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
