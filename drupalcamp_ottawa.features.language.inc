<?php
/**
 * @file
 * drupalcamp_ottawa.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function drupalcamp_ottawa_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'En',
    'native' => 'En',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'Fr',
    'native' => 'Fr',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => '0',
  );
  return $languages;
}
