<?php
/**
 * @file
 * drupalcamp_ottawa.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalcamp_ottawa_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Home and news page for DrupalCamp Ottawa.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'home front',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Event',
        'keyword' => 'event',
        'name' => 'entity:node',
        'entity_id' => '32',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '46077125-a222-0504-8952-51820f9dcb8f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-758abbc7-f6fd-7dd4-c5f7-ee6f95f9bb05';
    $pane->panel = 'left_above';
    $pane->type = 'views';
    $pane->subtype = 'dc_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '758abbc7-f6fd-7dd4-c5f7-ee6f95f9bb05';
    $display->content['new-758abbc7-f6fd-7dd4-c5f7-ee6f95f9bb05'] = $pane;
    $display->panels['left_above'][0] = 'new-758abbc7-f6fd-7dd4-c5f7-ee6f95f9bb05';
    $pane = new stdClass();
    $pane->pid = 'new-c5863350-b09c-9284-8d51-e91add8cc443';
    $pane->panel = 'left_below';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'context_entity:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c5863350-b09c-9284-8d51-e91add8cc443';
    $display->content['new-c5863350-b09c-9284-8d51-e91add8cc443'] = $pane;
    $display->panels['left_below'][0] = 'new-c5863350-b09c-9284-8d51-e91add8cc443';
    $pane = new stdClass();
    $pane->pid = 'new-b4e86733-8d76-8a94-d19f-1d677b2c768b';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '37',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4e86733-8d76-8a94-d19f-1d677b2c768b';
    $display->content['new-b4e86733-8d76-8a94-d19f-1d677b2c768b'] = $pane;
    $display->panels['middle'][0] = 'new-b4e86733-8d76-8a94-d19f-1d677b2c768b';
    $pane = new stdClass();
    $pane->pid = 'new-b99890fd-93d0-5614-e13b-0df790c28b6d';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '36',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b99890fd-93d0-5614-e13b-0df790c28b6d';
    $display->content['new-b99890fd-93d0-5614-e13b-0df790c28b6d'] = $pane;
    $display->panels['middle'][1] = 'new-b99890fd-93d0-5614-e13b-0df790c28b6d';
    $pane = new stdClass();
    $pane->pid = 'new-e0fc9998-642f-5e54-25fb-4f32b516bcdf';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'default' => 'default',
              'en' => 'en',
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Title',
      ),
      'override_title' => 1,
      'override_title_text' => 'Become A Sponsor',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0fc9998-642f-5e54-25fb-4f32b516bcdf';
    $display->content['new-e0fc9998-642f-5e54-25fb-4f32b516bcdf'] = $pane;
    $display->panels['right_above'][0] = 'new-e0fc9998-642f-5e54-25fb-4f32b516bcdf';
    $pane = new stdClass();
    $pane->pid = 'new-fbbea667-e0cf-9a04-ed65-0bea15ab63f9';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'fr' => 'fr',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Title',
      ),
      'override_title' => 1,
      'override_title_text' => 'Devenez commanditaire',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fbbea667-e0cf-9a04-ed65-0bea15ab63f9';
    $display->content['new-fbbea667-e0cf-9a04-ed65-0bea15ab63f9'] = $pane;
    $display->panels['right_above'][1] = 'new-fbbea667-e0cf-9a04-ed65-0bea15ab63f9';
    $pane = new stdClass();
    $pane->pid = 'new-087ab8ae-0ae1-39c4-25e6-2f4e0f7ed2b9';
    $pane->panel = 'right_above';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '11',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '087ab8ae-0ae1-39c4-25e6-2f4e0f7ed2b9';
    $display->content['new-087ab8ae-0ae1-39c4-25e6-2f4e0f7ed2b9'] = $pane;
    $display->panels['right_above'][2] = 'new-087ab8ae-0ae1-39c4-25e6-2f4e0f7ed2b9';
    $pane = new stdClass();
    $pane->pid = 'new-c2ffbbb8-b468-ec14-f9ac-18a72aeb5946';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'registration_status-registration_status_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_entity:node_1',
        1 => 'context_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2ffbbb8-b468-ec14-f9ac-18a72aeb5946';
    $display->content['new-c2ffbbb8-b468-ec14-f9ac-18a72aeb5946'] = $pane;
    $display->panels['right_below'][0] = 'new-c2ffbbb8-b468-ec14-f9ac-18a72aeb5946';
    $pane = new stdClass();
    $pane->pid = 'new-8eb27b83-6ef9-3c94-c545-b3a41a40994a';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_add_on-event_add_on_pane';
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
    $pane->uuid = '8eb27b83-6ef9-3c94-c545-b3a41a40994a';
    $display->content['new-8eb27b83-6ef9-3c94-c545-b3a41a40994a'] = $pane;
    $display->panels['right_below'][1] = 'new-8eb27b83-6ef9-3c94-c545-b3a41a40994a';
    $pane = new stdClass();
    $pane->pid = 'new-9ad53add-350b-8fd4-7137-ff37a9fc9cf3';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'featurehover-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ad53add-350b-8fd4-7137-ff37a9fc9cf3';
    $display->content['new-9ad53add-350b-8fd4-7137-ff37a9fc9cf3'] = $pane;
    $display->panels['top'][0] = 'new-9ad53add-350b-8fd4-7137-ff37a9fc9cf3';
    $pane = new stdClass();
    $pane->pid = 'new-c0338b7e-b021-b444-11e4-6495ad59cce8';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '8',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c0338b7e-b021-b444-11e4-6495ad59cce8';
    $display->content['new-c0338b7e-b021-b444-11e4-6495ad59cce8'] = $pane;
    $display->panels['top'][1] = 'new-c0338b7e-b021-b444-11e4-6495ad59cce8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsors';
  $page->task = 'page';
  $page->admin_title = 'Sponsors';
  $page->admin_description = 'Sponsors page where a list of platinum, gold and silver sponsor nodes will be shown.';
  $page->path = 'sponsors';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sponsors',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sponsors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sponsors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sponsors',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Special Thanks To Our Sponsors';
  $display->uuid = '7542c481-1132-eb14-3956-145ca7c94a9b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7a828830-341a-2d34-49ed-4a85fa039b7d';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'default' => 'default',
              'en' => 'en',
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Title',
      ),
      'override_title' => 1,
      'override_title_text' => 'Title Sponsor',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a828830-341a-2d34-49ed-4a85fa039b7d';
    $display->content['new-7a828830-341a-2d34-49ed-4a85fa039b7d'] = $pane;
    $display->panels['top'][0] = 'new-7a828830-341a-2d34-49ed-4a85fa039b7d';
    $pane = new stdClass();
    $pane->pid = 'new-ee12836b-206f-1864-a50b-4af037ee94a7';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'fr' => 'fr',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Title',
      ),
      'override_title' => 1,
      'override_title_text' => 'Commanditaire en titre',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ee12836b-206f-1864-a50b-4af037ee94a7';
    $display->content['new-ee12836b-206f-1864-a50b-4af037ee94a7'] = $pane;
    $display->panels['top'][1] = 'new-ee12836b-206f-1864-a50b-4af037ee94a7';
    $pane = new stdClass();
    $pane->pid = 'new-69f0d95c-207c-8d14-a9bf-1499a10eb6a6';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'default' => 'default',
              'en' => 'en',
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Gold',
      ),
      'override_title' => 1,
      'override_title_text' => 'Gold Sponsors',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gold',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '69f0d95c-207c-8d14-a9bf-1499a10eb6a6';
    $display->content['new-69f0d95c-207c-8d14-a9bf-1499a10eb6a6'] = $pane;
    $display->panels['top'][2] = 'new-69f0d95c-207c-8d14-a9bf-1499a10eb6a6';
    $pane = new stdClass();
    $pane->pid = 'new-1542fe4d-3cb4-3ed4-79d9-bda19fb8c05c';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'fr' => 'fr',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Gold',
      ),
      'override_title' => 1,
      'override_title_text' => 'Commanditaire or',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gold',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1542fe4d-3cb4-3ed4-79d9-bda19fb8c05c';
    $display->content['new-1542fe4d-3cb4-3ed4-79d9-bda19fb8c05c'] = $pane;
    $display->panels['top'][3] = 'new-1542fe4d-3cb4-3ed4-79d9-bda19fb8c05c';
    $pane = new stdClass();
    $pane->pid = 'new-b8cf9dfb-b096-d474-d9d8-1115f5c6fc09';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'default' => 'default',
              'en' => 'en',
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Silver',
      ),
      'override_title' => 1,
      'override_title_text' => 'Silver Sponsors',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'silver',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b8cf9dfb-b096-d474-d9d8-1115f5c6fc09';
    $display->content['new-b8cf9dfb-b096-d474-d9d8-1115f5c6fc09'] = $pane;
    $display->panels['top'][4] = 'new-b8cf9dfb-b096-d474-d9d8-1115f5c6fc09';
    $pane = new stdClass();
    $pane->pid = 'new-2d194e35-59b1-a674-e56f-291cd83d9d7a';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'fr' => 'fr',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Silver',
      ),
      'override_title' => 1,
      'override_title_text' => 'Commanditaire argent',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'silver',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2d194e35-59b1-a674-e56f-291cd83d9d7a';
    $display->content['new-2d194e35-59b1-a674-e56f-291cd83d9d7a'] = $pane;
    $display->panels['top'][5] = 'new-2d194e35-59b1-a674-e56f-291cd83d9d7a';
    $pane = new stdClass();
    $pane->pid = 'new-e625b2d5-2b17-c6f4-4de6-dcb5687a039a';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'default' => 'default',
              'en' => 'en',
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Bronze',
      ),
      'override_title' => 1,
      'override_title_text' => 'Bronze Sponsors',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bronze',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e625b2d5-2b17-c6f4-4de6-dcb5687a039a';
    $display->content['new-e625b2d5-2b17-c6f4-4de6-dcb5687a039a'] = $pane;
    $display->panels['top'][6] = 'new-e625b2d5-2b17-c6f4-4de6-dcb5687a039a';
    $pane = new stdClass();
    $pane->pid = 'new-13558e0f-36a2-0814-4500-9bfc62f2225d';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalcamp_sponsor_title-drupalcamp_sponsors';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'fr' => 'fr',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_sponsor_sponsorship_level_tid' => 'Bronze',
      ),
      'override_title' => 1,
      'override_title_text' => 'Commanditaire bronze',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bronze',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '13558e0f-36a2-0814-4500-9bfc62f2225d';
    $display->content['new-13558e0f-36a2-0814-4500-9bfc62f2225d'] = $pane;
    $display->panels['top'][7] = 'new-13558e0f-36a2-0814-4500-9bfc62f2225d';
    $pane = new stdClass();
    $pane->pid = 'new-f8d23f64-e002-27f4-fd00-f23ba585a5aa';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '12',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'become-a-sponsor',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f8d23f64-e002-27f4-fd00-f23ba585a5aa';
    $display->content['new-f8d23f64-e002-27f4-fd00-f23ba585a5aa'] = $pane;
    $display->panels['top'][8] = 'new-f8d23f64-e002-27f4-fd00-f23ba585a5aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsors'] = $page;

  return $pages;

}
