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

  // Exported menu link: main-menu_about:about
  $menu_links['main-menu_about:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:contact
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news:news
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ottawa-drupal-association:ottawa-drupal-association
  $menu_links['main-menu_ottawa-drupal-association:ottawa-drupal-association'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ottawa-drupal-association',
    'router_path' => 'ottawa-drupal-association',
    'link_title' => 'Ottawa Drupal Association',
    'options' => array(
      'identifier' => 'main-menu_ottawa-drupal-association:ottawa-drupal-association',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_proposed-sessions:node/2/program/sessions
  $menu_links['main-menu_proposed-sessions:node/2/program/sessions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2/program/sessions',
    'router_path' => 'node/%/program/sessions',
    'link_title' => 'Proposed Sessions',
    'options' => array(
      'attributes' => array(
        'title' => 'List of proposed sessions for DrupalCamp Ottawa.',
      ),
      'identifier' => 'main-menu_proposed-sessions:node/2/program/sessions',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sessions:node/2/program/sessions
  $menu_links['main-menu_sessions:node/2/program/sessions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2/program/sessions',
    'router_path' => 'node/%/program/sessions',
    'link_title' => 'Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sessions:node/2/program/sessions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sponsors:node/2/sponsors
  $menu_links['main-menu_sponsors:node/2/sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2/sponsors',
    'router_path' => 'node/%/sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sponsors:node/2/sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_about:about
  $menu_links['menu-footer-menu_about:about'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:contact
  $menu_links['menu-footer-menu_contact:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_login:user
  $menu_links['menu-footer-menu_login:user'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_login:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_news:news
  $menu_links['menu-footer-menu_news:news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_news:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_ottawa-drupal-association:ottawa-drupal-association
  $menu_links['menu-footer-menu_ottawa-drupal-association:ottawa-drupal-association'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'ottawa-drupal-association',
    'router_path' => 'ottawa-drupal-association',
    'link_title' => 'Ottawa Drupal Association',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_ottawa-drupal-association:ottawa-drupal-association',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_sessions:node/2/program/sessions
  $menu_links['menu-footer-menu_sessions:node/2/program/sessions'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2/program/sessions',
    'router_path' => 'node/%/program/sessions',
    'link_title' => 'Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_sessions:node/2/program/sessions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_sponsors:node/2/sponsors
  $menu_links['menu-footer-menu_sponsors:node/2/sponsors'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2/sponsors',
    'router_path' => 'node/%/sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_sponsors:node/2/sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_drupalorg:https://groups.drupal.org/ottawa
  $menu_links['menu-social-menu_drupalorg:https://groups.drupal.org/ottawa'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://groups.drupal.org/ottawa',
    'router_path' => '',
    'link_title' => 'Drupal.org',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_drupalorg:https://groups.drupal.org/ottawa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_facebook:https://www.facebook.com/DrupalCampOttawa
  $menu_links['menu-social-menu_facebook:https://www.facebook.com/DrupalCampOttawa'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://www.facebook.com/DrupalCampOttawa',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_facebook:https://www.facebook.com/DrupalCampOttawa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_twitter:https://twitter.com/drupalcampott
  $menu_links['menu-social-menu_twitter:https://twitter.com/drupalcampott'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://twitter.com/drupalcampott',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_twitter:https://twitter.com/drupalcampott',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_register:user/register
  $menu_links['user-menu_register:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'identifier' => 'user-menu_register:user/register',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contact');
  t('Drupal.org');
  t('Facebook');
  t('Login');
  t('News');
  t('Ottawa Drupal Association');
  t('Proposed Sessions');
  t('Register');
  t('Sessions');
  t('Sponsors');
  t('Twitter');


  return $menu_links;
}
