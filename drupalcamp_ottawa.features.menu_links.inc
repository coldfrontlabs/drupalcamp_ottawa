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

  // Exported menu link: main-menu:home
  $menu_links['main-menu:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:sponsors
  $menu_links['main-menu:sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Sponsors',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-menu:https://twitter.com/DrupalCampOTT
  $menu_links['menu-footer-menu:https://twitter.com/DrupalCampOTT'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://twitter.com/DrupalCampOTT',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'twitter',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer-menu:https://www.facebook.com/DrupalCampOttawa
  $menu_links['menu-footer-menu:https://www.facebook.com/DrupalCampOttawa'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://www.facebook.com/DrupalCampOttawa',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'fb',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('News');
  t('Sponsors');
  t('Twitter');


  return $menu_links;
}
