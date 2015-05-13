<?php
/**
 * @file
 * drupalcamp_ottawa.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcamp_ottawa_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function drupalcamp_ottawa_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|news|teaser'])) {
    $data['node|news|teaser']->settings['title']['formatter_settings'] = array(
      'link' => 1,
      'wrapper' => 'h2',
      'class' => '',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function drupalcamp_ottawa_field_default_field_bases_alter(&$data) {
  if (isset($data['field_news_image'])) {
    $data['field_news_image']['settings']['entity_translation_sync'] = array(
      0 => 'fid',
    ); /* WAS: '' */
  }
  if (isset($data['field_news_tags'])) {
    $data['field_news_tags']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_sponsor_body'])) {
    $data['field_sponsor_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['field_sponsor_body']['translatable'] = 1; /* WAS: 0 */
  }
  if (isset($data['field_sponsor_logo'])) {
    $data['field_sponsor_logo']['settings']['entity_translation_sync'] = array(
      0 => 'fid',
    ); /* WAS: '' */
  }
  if (isset($data['field_sponsor_related_attendees'])) {
    $data['field_sponsor_related_attendees']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_sponsor_sponsorship_level'])) {
    $data['field_sponsor_sponsorship_level']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_sponsor_url'])) {
    $data['field_sponsor_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function drupalcamp_ottawa_field_default_field_instances_alter(&$data) {
  if (isset($data['node-news-body'])) {
    $data['node-news-body']['display']['default']['weight'] = 2; /* WAS: 0 */
    $data['node-news-body']['display']['teaser']['weight'] = 2; /* WAS: 0 */
    $data['node-news-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-news-field_news_tags'])) {
    unset($data['node-news-field_news_tags']);
  }
  if (isset($data['node-news-og_group_ref'])) {
    $data['node-news-og_group_ref']['display']['default']['type'] = 'hidden'; /* WAS: 'og_list_default' */
    $data['node-news-og_group_ref']['display']['default']['weight'] = 10; /* WAS: 1 */
    $data['node-news-og_group_ref']['display']['teaser']['weight'] = 8; /* WAS: 0 */
    $data['node-news-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-news-og_group_ref']['display']['default']['module']);
  }
  if (isset($data['node-session-field_news_image'])) {
    $data['node-session-field_news_image']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-sponsor-field_sponsor_body'])) {
    $data['node-sponsor-field_sponsor_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-field_sponsor_body']['widget']['weight'] = 2; /* WAS: 1 */
  }
  if (isset($data['node-sponsor-field_sponsor_logo'])) {
    $data['node-sponsor-field_sponsor_logo']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-field_sponsor_logo']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-sponsor-field_sponsor_related_attendees'])) {
    $data['node-sponsor-field_sponsor_related_attendees']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-field_sponsor_related_attendees']['widget']['weight'] = 3; /* WAS: 2 */
  }
  if (isset($data['node-sponsor-field_sponsor_sponsorship_level'])) {
    $data['node-sponsor-field_sponsor_sponsorship_level']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-field_sponsor_sponsorship_level']['widget']['weight'] = 9; /* WAS: 7 */
  }
  if (isset($data['node-sponsor-field_sponsor_url'])) {
    $data['node-sponsor-field_sponsor_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-field_sponsor_url']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['node-sponsor-og_group_ref'])) {
    $data['node-sponsor-og_group_ref']['display']['default']['module'] = 'og_ui'; /* WAS: 'entityreference' */
    $data['node-sponsor-og_group_ref']['display']['default']['type'] = 'og_list_default'; /* WAS: 'entityreference_label' */
    $data['node-sponsor-og_group_ref']['display']['default']['weight'] = 9; /* WAS: 6 */
    $data['node-sponsor-og_group_ref']['label'] = 'Groups audience'; /* WAS: 'Conference' */
    $data['node-sponsor-og_group_ref']['required'] = FALSE; /* WAS: 1 */
    $data['node-sponsor-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-og_group_ref']['view modes'] = array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ); /* WAS: '' */
    $data['node-sponsor-og_group_ref']['widget']['weight'] = 12; /* WAS: 6 */
    unset($data['node-sponsor-og_group_ref']['default_value_function']);
    unset($data['node-sponsor-og_group_ref']['display']['default']['settings']['link']);
    unset($data['node-sponsor-og_group_ref']['settings']['behaviors']['prepopulate']);
    unset($data['node-sponsor-og_group_ref']['widget']['active']);
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function drupalcamp_ottawa_user_default_permissions_alter(&$data) {
  if (isset($data['create sponsor content'])) {
    $data['create sponsor content']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
  if (isset($data['view sponsors'])) {
    $data['view sponsors']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function drupalcamp_ottawa_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__news'])) {
    $data['field_bundle_settings_node__news']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['listing'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['revision'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_news'])) {
    unset($data['node_options_news']->value[2]);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function drupalcamp_ottawa_views_default_views_alter(&$data) {
  if (isset($data['cod_sponsors'])) {
    $data['cod_sponsors']->display['default']->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid'; /* WAS: '' */
    $data['cod_sponsors']->display['default']->display_options['fields']['field_sponsor_logo']['settings'] = array(
      'image_style' => 'sponsor_logo',
      'image_link' => '',
    ); /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['defaults']['empty'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['empty'] = array(
      'area_text_custom' => array(
        'id' => 'area_text_custom',
        'table' => 'views',
        'field' => 'area_text_custom',
        'label' => 'Placeholder Image',
        'empty' => TRUE,
        'content' => '<a href="/drupalcamp-ottawa-2015/sponsors"><img src="/sites/all/themes/drupalcampy/images/sponsor-placeholder.jpg" alt="Become a Sponsor"></a>',
      ),
    ); /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['fields']['field_sponsor_logo']['settings']['image_style'] = 'sponsor_logo'; /* WAS: 'cod_sponsors' */
    $data['cod_sponsors']->display['page']->display_options['row_options'] = array(
      'default_field_elements' => FALSE,
    ); /* WAS: '' */
    $data['cod_sponsors']->display['page']->display_options['style_plugin'] = 'list'; /* WAS: 'default' */
    $data['cod_sponsors']->display['sponsor_carousel_block'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:7:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:6:{s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;}s:12:"style_plugin";s:10:"flexslider";s:13:"style_options";a:1:{s:9:"optionset";s:17:"sponsors_carousel";}s:10:"row_plugin";s:6:"fields";s:6:"fields";a:3:{s:17:"field_sponsor_url";a:8:{s:2:"id";s:17:"field_sponsor_url";s:5:"table";s:28:"field_data_field_sponsor_url";s:5:"field";s:17:"field_sponsor_url";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"url";s:4:"type";s:8:"link_url";}s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:19:"element_label_colon";b:0;s:12:"link_to_node";b:0;}s:18:"field_sponsor_logo";a:8:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:5:"alter";a:4:{s:9:"make_link";b:1;s:4:"path";s:19:"[field_sponsor_url]";s:8:"external";b:1;s:3:"alt";s:7:"[title]";}s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:12:"sponsor_logo";s:10:"image_link";s:0:"";}}}s:5:"sorts";a:1:{s:35:"field_sponsor_sponsorship_level_tid";a:3:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:22:"sponsor_carousel_block";s:13:"display_title";s:23:"Sponsors Carousel Block";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['cod_sponsors']->display['title_sponsor_block'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:5:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:4:{s:5:"empty";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"empty";a:1:{s:16:"area_text_custom";a:6:{s:2:"id";s:16:"area_text_custom";s:5:"table";s:5:"views";s:5:"field";s:16:"area_text_custom";s:5:"label";s:17:"Placeholder Image";s:5:"empty";b:1;s:7:"content";s:142:"<a href="/drupalcamp-ottawa-2015/sponsors"><img src="/sites/all/themes/drupalcampy/images/sponsor-placeholder.jpg" alt="Become a Sponsor"></a>";}}s:6:"fields";a:3:{s:5:"title";a:8:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:19:"element_label_colon";b:0;s:12:"link_to_node";b:0;}s:17:"field_sponsor_url";a:7:{s:2:"id";s:17:"field_sponsor_url";s:5:"table";s:28:"field_data_field_sponsor_url";s:5:"field";s:17:"field_sponsor_url";s:5:"label";s:0:"";s:7:"exclude";b:1;s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"url";}s:18:"field_sponsor_logo";a:8:{s:2:"id";s:18:"field_sponsor_logo";s:5:"table";s:29:"field_data_field_sponsor_logo";s:5:"field";s:18:"field_sponsor_logo";s:5:"label";s:0:"";s:5:"alter";a:4:{s:9:"make_link";b:1;s:4:"path";s:19:"[field_sponsor_url]";s:8:"external";b:1;s:3:"alt";s:7:"[title]";}s:19:"element_label_colon";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:0:"";s:10:"image_link";s:0:"";}}}s:7:"filters";a:3:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:4:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"sponsor";s:7:"sponsor";}}s:35:"field_sponsor_sponsorship_level_tid";a:6:{s:2:"id";s:35:"field_sponsor_sponsorship_level_tid";s:5:"table";s:42:"field_data_field_sponsor_sponsorship_level";s:5:"field";s:35:"field_sponsor_sponsorship_level_tid";s:5:"value";a:1:{i:1;s:1:"1";}s:4:"type";s:6:"select";s:10:"vocabulary";s:17:"sponsorship_level";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:19:"title_sponsor_block";s:13:"display_title";s:19:"Title Sponsor Block";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    unset($data['cod_sponsors']->display['default']->display_options['empty']);
    unset($data['cod_sponsors']->display['default']->display_options['sorts']);
    unset($data['cod_sponsors']->display['page']->display_options['style_options']['row_class']);
  }
}

/**
 * Implements hook_image_default_styles().
 */
function drupalcamp_ottawa_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor_logo.
  $styles['sponsor_logo'] = array(
    'name' => 'sponsor_logo',
    'label' => 'Sponsor Logo',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      6 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_effect',
        'dimensions callback' => 'canvasactions_definecanvas_dimensions',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 480,
            'height' => 360,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
