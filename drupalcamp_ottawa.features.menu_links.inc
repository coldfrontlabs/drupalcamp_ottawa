<?php
/**
 * @file
 * drupalcamp_ottawa.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupalcamp_ottawa_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_register:user/register
  $menu_links['user-menu_register:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'style' => 'user-register button',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_register:user/register',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'style' => 'user-account button',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Register');
  t('User account');


  return $menu_links;
}
