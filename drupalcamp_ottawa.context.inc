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
  $context->name = 'drupalcamp';
  $context->description = 'All conditions specific to conference pages';
  $context->tag = 'drupalcampy';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*/sessions' => 'node/*/sessions',
        'node/*/sponsors' => 'node/*/sponsors',
        'node/*/program' => 'node/*/program',
        'node/*/program/*' => 'node/*/program/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All conditions specific to conference pages');
  t('drupalcampy');
  $export['drupalcamp'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_layout';
  $context->description = 'Block layouts for drupalcampy theme';
  $context->tag = 'drupalcampy';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~/admin/' => '~/admin/',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e66186f2ede5404df1d859352e3507e0' => array(
          'module' => 'views',
          'delta' => 'e66186f2ede5404df1d859352e3507e0',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-48791524a2230a592720c82cc5ebefb9' => array(
          'module' => 'views',
          'delta' => '48791524a2230a592720c82cc5ebefb9',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-5',
        ),
        'menu-menu-social-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-social-menu',
          'region' => 'footer',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block layouts for drupalcampy theme');
  t('drupalcampy');
  $export['drupalcamp_layout'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_layout';
  $context->description = 'Add sidebar blocks to specific pages';
  $context->tag = 'drupalcampy';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'drupalcamp' => 'drupalcamp',
      ),
    ),
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add sidebar blocks to specific pages');
  t('drupalcampy');
  $export['sidebar_layout'] = $context;

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
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggers on all main menu / top level pages');
  t('blocks');
  $export['top_level'] = $context;

  return $export;
}
