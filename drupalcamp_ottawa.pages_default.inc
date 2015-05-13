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
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = 'About page for the current drupalcamp event and general information about the Ottawa Drupal Association';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '100',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'responsive',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About';
  $display->uuid = '70f53f60-e2e3-46e1-ac54-0d580e93e169';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d0464491-3895-471f-a561-9b97d6127a45';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What\'s a DrupalCamp?',
      'title' => '',
      'body' => '<img alt="Question Marks" src="/sites/all/themes/drupalcampy/images/dc-questionmarks.png" />
<div class="about-content">
<h3>What\'s a DrupalCamp?</h3>

<p>DrupalCamp is an event for anyone using Drupal, or responsible for designing, building, developing, and supporting Drupal in any capacity. It’s a place where designers, developers, and Drupal users can brush shoulders with Drupal service providers, hosting vendors, and other members of the broader open-source community to discuss and learn about Drupal. It’s a great opportunity to meet with the community, exchange ideas, network and socialize!</p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0464491-3895-471f-a561-9b97d6127a45';
    $display->content['new-d0464491-3895-471f-a561-9b97d6127a45'] = $pane;
    $display->panels['middle'][0] = 'new-d0464491-3895-471f-a561-9b97d6127a45';
    $pane = new stdClass();
    $pane->pid = 'new-480c043d-2e60-46bc-b520-6326acbcbaf3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What\'s Drupal',
      'title' => '',
      'body' => '<img alt="Speech Bubbles" src="/sites/all/themes/drupalcampy/images/dc-whatis.png" />
<div class="about-content">
<h3>What\'s Drupal?</h3>

<p>Drupal is a free, open-source web development platform for online content and user communities. Drupal powers some of the busiest sites on the web and can be adapted virtually to any visual design. It runs over a million sites, including WhiteHouse.gov, Twitter.com, World Economic Forum, buyandsell.gc.ca, etc.</p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '480c043d-2e60-46bc-b520-6326acbcbaf3';
    $display->content['new-480c043d-2e60-46bc-b520-6326acbcbaf3'] = $pane;
    $display->panels['middle'][1] = 'new-480c043d-2e60-46bc-b520-6326acbcbaf3';
    $pane = new stdClass();
    $pane->pid = 'new-fe3bdf91-fd39-4e23-8cd6-70f8c55e51e5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DrupalCamp Ottawa’s Facts and Figures',
      'title' => '',
      'body' => '<img alt="Clipboard" src="/sites/all/themes/drupalcampy/images/dc-clipboard.png" />
<div class="about-content">
<h3>DrupalCamp Ottawa’s Facts and Figures</h3>

<ul>
	<li>
	<p>This year will be the third consecutive year running the event in Ottawa.</p>
	</li>
	<li>
	<p>It is the largest DrupalCamp in Ontario and Eastern Canada.</p>
	</li>
	<li>
	<p>2014 attendance: 200+ individuals and businesses.</p>
	</li>
	<li>
	<p>Projected attendance for 2015: 300+ individuals and businesses.</p>
	</li>
	<li>
	<p>Attendees\' profile: Developers, Designers, Marketing/ Web Communications Managers from Ottawa Corporations and Government Departments, IT and Web Businesses.</p>
	</li>
	<li>
	<p>Over a dozen sponsorships of both local and international firms.</p>
	</li>
	<li>
	<p>Attendees from all over North America.</p>
	</li>
	<li>
	<p>Past keynotes include Angie Byron (Drupal Core co-maintainer), Dries Buytaert (Drupal Creator/Maintainer), Tom Erickson (CEO, Acquia) and Andrew Hoppin (NY Senate).</p>
	</li>
	<li>
	<p>Official event from the Ottawa Drupal Association</p>
	</li>
</ul>

<p>The first DrupalCamp Ottawa, which took place in 2013 was a sellout event that surprised organizers and highlighted the level of Drupal interest in the National Capital Region. Since the event is run by volunteers with the financial support of companies that offer Drupal-related services, the camp is able to offer a high quality event for a very modest fee.</p>

</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe3bdf91-fd39-4e23-8cd6-70f8c55e51e5';
    $display->content['new-fe3bdf91-fd39-4e23-8cd6-70f8c55e51e5'] = $pane;
    $display->panels['middle'][2] = 'new-fe3bdf91-fd39-4e23-8cd6-70f8c55e51e5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'contact';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contact',
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
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact__panel_context_6afa3d7c-b66d-4879-8c50-211aecb89755';
  $handler->task = 'page';
  $handler->subtask = 'contact';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'responsive',
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
  $display->title = 'Contact Us';
  $display->uuid = '37638178-54b8-4085-9d52-df28aac6cc54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94cded74-722f-4e0c-91db-36079cb57276';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-27';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'contact-form',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94cded74-722f-4e0c-91db-36079cb57276';
    $display->content['new-94cded74-722f-4e0c-91db-36079cb57276'] = $pane;
    $display->panels['left_above'][0] = 'new-94cded74-722f-4e0c-91db-36079cb57276';
    $pane = new stdClass();
    $pane->pid = 'new-8c29446e-9963-42ad-8563-937a85a62c56';
    $pane->panel = 'right_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Google Map',
      'title' => '',
      'body' => '<div id="custom-map"><a href=""> Social Sciences building, University of Ottawa<br />
Building code: FSS<br />
120 University Private<br />
Ottawa, ON K1N 6N5 </a></div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'map',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c29446e-9963-42ad-8563-937a85a62c56';
    $display->content['new-8c29446e-9963-42ad-8563-937a85a62c56'] = $pane;
    $display->panels['right_above'][0] = 'new-8c29446e-9963-42ad-8563-937a85a62c56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
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
  $handler->name = 'page_home__panel_context_42b7bf2e-f788-4825-957e-de6579232c8d';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'responsive full-width',
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
  $display->title = 'No Title';
  $display->uuid = '1624a8a4-dfca-4f36-8b4e-ef23fe790303';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-63fb24d4-c0d6-4e22-b4e4-f393540e0a4c';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured Items',
      'title' => '',
      'body' => '  <div class="dark-box"></div>
<div class="content"> 
    <ul class="caption-style">
      <li> 
        <a href="/about" class="container-profile-dark">
          <div class="inner-content">
             <img src="/sites/all/themes/drupalcampy/images/feature-1.jpg" alt="Secret Silouette">
             <div class="caption-bg">
               <div class="caption-text">
                 <h4>Learn<strong> More</strong></h4>
              </div>
            </div>
            <h2>Keynote Speaker</h2>
            <p>Want to know who the keynote speaker of DrupalCamp 2015 is? Check back at the end of May to find out who it is! We promise you won\'t be dissapointed! </p>
   <!--          <p>Addison Beery (add1sun) has been involved with Drupal since 2006. She is Lullabot\'s Director of Education and the Product Manager for Drupalize.Me, the Drupal video training site.</p>
 -->          </div>
        </a>
      </li>
      
      <li> 
        <a href="/user/register" class="container-profile-dark">
          <div class="inner-content">
             <img src="/sites/all/themes/drupalcampy/images/feature-2.jpg" alt="People attending DrupalCamp">
             <div class="caption-bg">
               <div class="caption-text">
                 <h4>Read<strong> More</strong></h4>
              </div>
            </div>
            <h2>DrupalCamp is FREE</h2>
            <p>We are glad to be offering DrupalCamp tickets for free this year! Special thanks to all our sponsors who make a free event possible. Don\'t forget to register soon!</p>
          </div>
        </a>
      </li>
      <li> 
        <a href="/drupalcamp-ottawa-2015/sponsors" class="container-profile-dark">
          <div class="inner-content">
             <img src="/sites/all/themes/drupalcampy/images/feature-3.jpg" alt="Sponsors at DrupalCamp">
             <div class="caption-bg">
               <div class="caption-text">
                 <h4>View <strong> Sponsors</strong></h4>
              </div>
            </div>
            <h2>Become a Sponsor</h2>
            <p>We are still looking for sponsors. Feel free to check out our sponsorship packages to find out the perks of being an official sponsor of DrupalCamp Ottawa 2015!</p>
          </div>
        </a>
      </li>
  </ul>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'full-width-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63fb24d4-c0d6-4e22-b4e4-f393540e0a4c';
    $display->content['new-63fb24d4-c0d6-4e22-b4e4-f393540e0a4c'] = $pane;
    $display->panels['top'][0] = 'new-63fb24d4-c0d6-4e22-b4e4-f393540e0a4c';
    $pane = new stdClass();
    $pane->pid = 'new-4713ad9a-f49b-4c93-9088-a2181ffe9664';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Submit a Session',
      'title' => '',
      'body' => '<div class="pattern-reversed">
<h2>Submit a Session</h2>
<h3>Want to speak at DrupalCamp Ottawa 2015?</h3>

<p><a class="button window-btn" href="#">Submit A Session →</a></p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'submit-a-session banner__secondary',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4713ad9a-f49b-4c93-9088-a2181ffe9664';
    $display->content['new-4713ad9a-f49b-4c93-9088-a2181ffe9664'] = $pane;
    $display->panels['top'][1] = 'new-4713ad9a-f49b-4c93-9088-a2181ffe9664';
    $pane = new stdClass();
    $pane->pid = 'new-1750e8d9-d716-4548-a00b-91f7b325bff5';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Get Involved',
      'title' => 'Get Involved',
      'body' => '<h3>Sign up to volunteer or join the Ottawa Drupal Association</h3>

<p><a class="button window-btn" href="#">Volunteer →</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'volunteer banner__secondary',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1750e8d9-d716-4548-a00b-91f7b325bff5';
    $display->content['new-1750e8d9-d716-4548-a00b-91f7b325bff5'] = $pane;
    $display->panels['top'][2] = 'new-1750e8d9-d716-4548-a00b-91f7b325bff5';
    $pane = new stdClass();
    $pane->pid = 'new-95c1097d-35c5-4a4f-abd0-76062b2151f3';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Google Map',
      'title' => '',
      'body' => '<div id="custom-map">
 <a href="">
 Social Sciences building, University of Ottawa<br>
 Building code: FSS<br>
 120 University Private<br>
 Ottawa, ON K1N 6N5 
 </a>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner__secondary map',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '95c1097d-35c5-4a4f-abd0-76062b2151f3';
    $display->content['new-95c1097d-35c5-4a4f-abd0-76062b2151f3'] = $pane;
    $display->panels['top'][3] = 'new-95c1097d-35c5-4a4f-abd0-76062b2151f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ottawa_drupal_association';
  $page->task = 'page';
  $page->admin_title = 'Ottawa Drupal Association';
  $page->admin_description = '';
  $page->path = 'ottawa-drupal-association';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Ottawa Drupal Association',
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
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ottawa_drupal_association__panel_context_dff43fa4-f0de-4ee6-9c48-f8aef86e1329';
  $handler->task = 'page';
  $handler->subtask = 'ottawa_drupal_association';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'responsive',
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
  $display->title = '';
  $display->uuid = '160360a9-82b9-4740-87ec-b95bd6403897';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-72386951-03f3-4f7a-b765-b2202c65b184';
    $pane->panel = 'left_above';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => 'Sign up as a sponsor!',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '72386951-03f3-4f7a-b765-b2202c65b184';
    $display->content['new-72386951-03f3-4f7a-b765-b2202c65b184'] = $pane;
    $display->panels['left_above'][0] = 'new-72386951-03f3-4f7a-b765-b2202c65b184';
    $pane = new stdClass();
    $pane->pid = 'new-49749b4f-d4e5-4af9-bff5-db561dd2bc4c';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Submit a session',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '49749b4f-d4e5-4af9-bff5-db561dd2bc4c';
    $display->content['new-49749b4f-d4e5-4af9-bff5-db561dd2bc4c'] = $pane;
    $display->panels['right_above'][0] = 'new-49749b4f-d4e5-4af9-bff5-db561dd2bc4c';
    $pane = new stdClass();
    $pane->pid = 'new-7cbadef0-6e9d-4d58-8d8c-f3af004f614a';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What we do',
      'title' => 'What we do',
      'body' => '
<p>The ODA is a team of highly motivated volunteer that organize events, help and support Ottawa’s Drupal community. Our main goal is to coordinate amazing DrupalCamps in the National Capital every year, but we also support other events and Drupal-related initiatives in Ottawa.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7cbadef0-6e9d-4d58-8d8c-f3af004f614a';
    $display->content['new-7cbadef0-6e9d-4d58-8d8c-f3af004f614a'] = $pane;
    $display->panels['top'][0] = 'new-7cbadef0-6e9d-4d58-8d8c-f3af004f614a';
    $pane = new stdClass();
    $pane->pid = 'new-997fb7c7-7831-42ba-95a2-68c2a6a63fc3';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Who we are',
      'title' => 'Who we are',
      'body' => '<p>Members of the Drupal Community! Our Board is elected every year at the AGM and everybody is welcome to join.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '997fb7c7-7831-42ba-95a2-68c2a6a63fc3';
    $display->content['new-997fb7c7-7831-42ba-95a2-68c2a6a63fc3'] = $pane;
    $display->panels['top'][1] = 'new-997fb7c7-7831-42ba-95a2-68c2a6a63fc3';
    $pane = new stdClass();
    $pane->pid = 'new-e94f77c3-6ca7-4cb4-a5be-d563ba9f3caa';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Members',
      'title' => 'Members',
      'body' => '<div class="dark-circle"><img alt="" class="circle" src="/sites/all/themes/drupalcampy/images/feature-1.jpg" />
<div class="about-content">
<h3>Pat Gilbert, President</h3>

<p>Pat is the Director of Business Development and Sales at OPIN Software, and has been involved in the Drupal community for the past 4 years.</p>
</div>
</div>

<div class="light-circle"><img alt="" class="circle" src="/sites/all/themes/drupalcampy/images/feature-1.jpg" />
<div class="about-content">
<h3>Claire-Isabelle Carlier, Vice-President</h3>

<p>Claire is Business Development and Marketing Manager at OpenConcept Consulting. She joined the Drupal community (and Canada!) over a year ago and has background in UX and content strategy.</p>
</div>
</div>

<div class="dark-circle"><img alt="" class="circle" src="/sites/all/themes/drupalcampy/images/feature-1.jpg" />
<div class="about-content">
<h3>Mathew Winstone, Secretary</h3>

<p>Mathew is CEO and Co-Founder of Coldfront Labs. He has been working with Drupal since 2005 and has a great interest in responsive web development and bringing powerful applications to the browser using HTML5 and Drupal. [Link to d.org profile?]</p>
</div>
</div>

<div class="light-circle"><img alt="" class="circle" src="/sites/all/themes/drupalcampy/images/feature-1.jpg" />
<div class="about-content">
<h3>John Downing, Treasurer</h3>

<p>John is the President of TrainingCity and has been providing IT Training and Consulting for the past 18 years. He has been very active in the Drupal community for many years and joined ODA last year.</p>
</div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e94f77c3-6ca7-4cb4-a5be-d563ba9f3caa';
    $display->content['new-e94f77c3-6ca7-4cb4-a5be-d563ba9f3caa'] = $pane;
    $display->panels['top'][2] = 'new-e94f77c3-6ca7-4cb4-a5be-d563ba9f3caa';
    $pane = new stdClass();
    $pane->pid = 'new-b904f9e6-8cb4-4d95-9968-d49f2f577599';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'How to become a member',
      'title' => 'How to Become a Member',
      'body' => '<p>The ODA will have a stand at DrupalCamp where you can register with your drupal account and pay a $5 fee to support the association. The fee will cover the costs of drupalcamp hosting and domain name as well as food and beverages for pop-up community events and meetups.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b904f9e6-8cb4-4d95-9968-d49f2f577599';
    $display->content['new-b904f9e6-8cb4-4d95-9968-d49f2f577599'] = $pane;
    $display->panels['top'][3] = 'new-b904f9e6-8cb4-4d95-9968-d49f2f577599';
    $pane = new stdClass();
    $pane->pid = 'new-6daf4edf-1976-47d9-8608-aa6a5155571e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Why join ODA?',
      'title' => 'Why join ODA?',
      'body' => '<p>You will have the ability to vote for board members (and become a board member!), you will be the first to know about drupal events organized in the National Capital and you will be able to volunteer and help our team to create a thriving community in Ottawa!</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6daf4edf-1976-47d9-8608-aa6a5155571e';
    $display->content['new-6daf4edf-1976-47d9-8608-aa6a5155571e'] = $pane;
    $display->panels['top'][4] = 'new-6daf4edf-1976-47d9-8608-aa6a5155571e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ottawa_drupal_association'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsor_information';
  $page->task = 'page';
  $page->admin_title = 'Sponsor Information';
  $page->admin_description = 'Sponsor packages for DrupalCamp Ottawa';
  $page->path = 'sponsors/packages';
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
  $handler->name = 'page_sponsor_information_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sponsor_information';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsor Packages';
  $display->uuid = '9bf4e957-4727-40d4-bdc0-34919f0ed6dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b228e529-305a-4334-8cc3-4a96835e5612';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor_levels-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b228e529-305a-4334-8cc3-4a96835e5612';
    $display->content['new-b228e529-305a-4334-8cc3-4a96835e5612'] = $pane;
    $display->panels['middle'][0] = 'new-b228e529-305a-4334-8cc3-4a96835e5612';
    $pane = new stdClass();
    $pane->pid = 'new-71f22fb5-a968-4447-babd-30ff06f3ab14';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsor_levels-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '71f22fb5-a968-4447-babd-30ff06f3ab14';
    $display->content['new-71f22fb5-a968-4447-babd-30ff06f3ab14'] = $pane;
    $display->panels['middle'][1] = 'new-71f22fb5-a968-4447-babd-30ff06f3ab14';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-b228e529-305a-4334-8cc3-4a96835e5612';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsor_information'] = $page;

  return $pages;

}
