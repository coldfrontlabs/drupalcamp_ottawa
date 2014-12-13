<?php
/**
 * @file
 * drupalcamp_ottawa.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamp_ottawa_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top_level';
  $context->description = 'Triggers on all main menu / top level pages';
  $context->tag = 'blocks';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'about' => 'about',
        'news' => 'news',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-site-slogan' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-slogan',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggers on all main menu / top level pages');
  t('blocks');
  $export['top_level'] = $context;

  return $export;
}
