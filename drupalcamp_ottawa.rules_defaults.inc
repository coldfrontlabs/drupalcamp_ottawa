<?php
/**
 * @file
 * drupalcamp_ottawa.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalcamp_ottawa_default_rules_configuration() {
  $items = array();
  $items['rules_generate_bronze_sponsor_passes'] = entity_import('rules_config', '{ "rules_generate_bronze_sponsor_passes" : {
      "LABEL" : "Generate Bronze Sponsor Passes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DrupalCamp Ottawa" ],
      "REQUIRES" : [ "rules", "commerce", "rules_i18n" ],
      "ON" : { "node_update--sponsor" : { "bundle" : "sponsor" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT entity_exists" : {
            "type" : "commerce_coupon",
            "property" : "commerce_coupon_code",
            "value" : "node:title-field Sponsor Pass"
          }
        },
        { "data_is" : {
            "data" : [ "node:field-sponsor-sponsorship-level" ],
            "op" : "IN",
            "value" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "commerce_coupon" },
            "PROVIDE" : { "entity_created" : { "coupon_created" : "Created Coupon" } }
          }
        },
        { "data_set" : { "data" : [ "coupon-created:type" ], "value" : "commerce_coupon_fixed" } },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-code" ],
            "value" : "[node:title-field] Sponsor Pass"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-number-of-uses" ],
            "value" : "2"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce_coupon_fixed_amount" ],
            "value" : { "value" : { "amount" : 3000, "currency_code" : "CAD" } }
          }
        },
        { "entity_save" : { "data" : [ "coupon-created" ], "immediate" : 1 } },
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "DrupalCamp Ottawa 2014 Sponsor Passes",
            "message" : "Thank you for sponsoring DrupalCamp Ottawa 2014. As a [node:field-sponsor-sponsorship-level] sponsor you are entitled to [coupon-created:commerce-coupon-number-of-uses] pass(es).\\r\\n\\r\\nDuring checkout, you may use this coupon code to get your free pass:\\r\\n[coupon-created:commerce-coupon-code]\\r\\n\\r\\nThis coupon is only valid for [coupon-created:commerce-coupon-number-of-uses] use(s).\\r\\n\\r\\nThanks again and looking forward to seeing you at DrupalCamp Ottawa in March!",
            "from" : "sponsors@drupalcampottawa.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_generate_gold_sponsor_passes'] = entity_import('rules_config', '{ "rules_generate_gold_sponsor_passes" : {
      "LABEL" : "Generate Gold Sponsor Passes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DrupalCamp Ottawa" ],
      "REQUIRES" : [ "rules", "commerce", "rules_i18n" ],
      "ON" : { "node_update--sponsor" : { "bundle" : "sponsor" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT entity_exists" : {
            "type" : "commerce_coupon",
            "property" : "commerce_coupon_code",
            "value" : "node:title-field Sponsor Pass"
          }
        },
        { "data_is" : {
            "data" : [ "node:field-sponsor-sponsorship-level" ],
            "op" : "IN",
            "value" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "commerce_coupon" },
            "PROVIDE" : { "entity_created" : { "coupon_created" : "Created Coupon" } }
          }
        },
        { "data_set" : { "data" : [ "coupon-created:type" ], "value" : "commerce_coupon_fixed" } },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-code" ],
            "value" : "[node:title-field] Sponsor Pass"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-number-of-uses" ],
            "value" : "5"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce_coupon_fixed_amount" ],
            "value" : { "value" : { "amount" : 3000, "currency_code" : "CAD" } }
          }
        },
        { "entity_save" : { "data" : [ "coupon-created" ], "immediate" : 1 } },
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "DrupalCamp Ottawa 2014 Sponsor Passes",
            "message" : "Thank you for sponsoring DrupalCamp Ottawa 2014. As a [node:field-sponsor-sponsorship-level] sponsor you are entitled to [coupon-created:commerce-coupon-number-of-uses] pass(es).\\r\\n\\r\\nDuring checkout, you may use this coupon code to get your free pass:\\r\\n[coupon-created:commerce-coupon-code]\\r\\n\\r\\nThis coupon is only valid for [coupon-created:commerce-coupon-number-of-uses] use(s).\\r\\n\\r\\nThanks again and looking forward to seeing you at DrupalCamp Ottawa in March!",
            "from" : "sponsors@drupalcampottawa.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_generate_silver_sponsor_passes'] = entity_import('rules_config', '{ "rules_generate_silver_sponsor_passes" : {
      "LABEL" : "Generate Silver Sponsor Passes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DrupalCamp Ottawa" ],
      "REQUIRES" : [ "rules", "commerce", "rules_i18n" ],
      "ON" : { "node_update--sponsor" : { "bundle" : "sponsor" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT entity_exists" : {
            "type" : "commerce_coupon",
            "property" : "commerce_coupon_code",
            "value" : "node:title-field Sponsor Pass"
          }
        },
        { "data_is" : {
            "data" : [ "node:field-sponsor-sponsorship-level" ],
            "op" : "IN",
            "value" : { "value" : { "5" : "5" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "commerce_coupon" },
            "PROVIDE" : { "entity_created" : { "coupon_created" : "Created Coupon" } }
          }
        },
        { "data_set" : { "data" : [ "coupon-created:type" ], "value" : "commerce_coupon_fixed" } },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-code" ],
            "value" : "[node:title-field] Sponsor Pass"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-number-of-uses" ],
            "value" : "3"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce_coupon_fixed_amount" ],
            "value" : { "value" : { "amount" : 3000, "currency_code" : "CAD" } }
          }
        },
        { "entity_save" : { "data" : [ "coupon-created" ], "immediate" : 1 } },
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "DrupalCamp Ottawa 2014 Sponsor Passes",
            "message" : "Thank you for sponsoring DrupalCamp Ottawa 2014. As a [node:field-sponsor-sponsorship-level] sponsor you are entitled to [coupon-created:commerce-coupon-number-of-uses] pass(es).\\r\\n\\r\\nDuring checkout, you may use this coupon code to get your free pass:\\r\\n[coupon-created:commerce-coupon-code]\\r\\n\\r\\nThis coupon is only valid for [coupon-created:commerce-coupon-number-of-uses] use(s).\\r\\n\\r\\nThanks again and looking forward to seeing you at DrupalCamp Ottawa in March!",
            "from" : "sponsors@drupalcampottawa.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_generate_title_sponsor_passes'] = entity_import('rules_config', '{ "rules_generate_title_sponsor_passes" : {
      "LABEL" : "Generate Title Sponsor Passes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DrupalCamp Ottawa" ],
      "REQUIRES" : [ "rules", "commerce", "rules_i18n" ],
      "ON" : { "node_update--sponsor" : { "bundle" : "sponsor" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT entity_exists" : {
            "type" : "commerce_coupon",
            "property" : "commerce_coupon_code",
            "value" : "node:title-field Sponsor Pass"
          }
        },
        { "data_is" : {
            "data" : [ "node:field-sponsor-sponsorship-level" ],
            "op" : "IN",
            "value" : { "value" : { "2" : "2" } }
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "commerce_coupon" },
            "PROVIDE" : { "entity_created" : { "coupon_created" : "Created Coupon" } }
          }
        },
        { "data_set" : { "data" : [ "coupon-created:type" ], "value" : "commerce_coupon_fixed" } },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-code" ],
            "value" : "[node:title-field] Sponsor Pass"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce-coupon-number-of-uses" ],
            "value" : "10"
          }
        },
        { "data_set" : {
            "data" : [ "coupon-created:commerce_coupon_fixed_amount" ],
            "value" : { "value" : { "amount" : 3000, "currency_code" : "CAD" } }
          }
        },
        { "entity_save" : { "data" : [ "coupon-created" ], "immediate" : 1 } },
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "DrupalCamp Ottawa 2014 Sponsor Passes",
            "message" : "Thank you for sponsoring DrupalCamp Ottawa 2014. As a [node:field-sponsor-sponsorship-level] sponsor you are entitled to [coupon-created:commerce-coupon-number-of-uses] pass(es).\\r\\n\\r\\nDuring checkout, you may use this coupon code to get your free pass:\\r\\n[coupon-created:commerce-coupon-code]\\r\\n\\r\\nThis coupon is only valid for [coupon-created:commerce-coupon-number-of-uses] use(s).\\r\\n\\r\\nThanks again and looking forward to seeing you at DrupalCamp Ottawa in March!",
            "from" : "sponsors@drupalcampottawa.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_oda_paypal_standard'] = entity_import('rules_config', '{ "rules_oda_paypal_standard" : {
      "LABEL" : "Ottawa Drupal Association Paypal Standard",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "paypal" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "IF" : [
        { "commerce_payment_order_balance_comparison" : {
            "commerce_order" : [ "commerce_order" ],
            "operator" : "\\u003E",
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "info@drupalcampottawa.com",
                  "currency_code" : "CAD",
                  "allow_supported_currencies" : 0,
                  "language" : "CA",
                  "server" : "live",
                  "payment_action" : "sale",
                  "ipn_logging" : "notification",
                  "receiver_emails" : "",
                  "ipn_create_billing_profile" : 1,
                  "show_payment_instructions" : 1
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_remind_unregistered_users'] = entity_import('rules_config', '{ "rules_remind_unregistered_users" : {
      "LABEL" : "Remind Unregistered Users",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "DrupalCamp Ottawa" ],
      "REQUIRES" : [ "rules", "views_rules", "rules_i18n" ],
      "ON" : { "cron" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "site:current-date" ], "value" : 1391266800 } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : "51" },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "unregistered_users",
            "DISPLAY" : "unregistered_rules",
            "ROW VARIABLES" : { "uid" : { "uid" : "User: Uid" } },
            "DO" : [
              { "mail" : {
                  "to" : [ "uid:mail" ],
                  "subject" : "[Reminder] Buy your ticket to DrupalCamp Ottawa",
                  "message" : "DrupalCamp Ottawa is a little more than a month away and now\\u0027s the time to get your ticket to the event. You already have an account on DrupalCampOttawa.com so you\\u0027re half way there.\\r\\n\\r\\nJust follow the link below to login and register for the event:\\r\\n\\r\\nhttp:\\/\\/drupalcampottawa.com\\/en\\/event\\/drupalcamp-ottawa-2014\\r\\n\\r\\n[entity-fetched:body]\\r\\n--\\r\\nDrupalCamp Ottawa Team",
                  "from" : "info@drupalcampottawa.com",
                  "language" : [ "uid:language" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_sponsor_node_created'] = entity_import('rules_config', '{ "rules_sponsor_node_created" : {
      "LABEL" : "New Sponsor Node Created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_i18n" ],
      "ON" : { "node_insert--sponsor" : { "bundle" : "sponsor" } },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "7" : "7" } } } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "7" : "7" } },
            "subject" : "New sponsor created",
            "message" : "A new sponsor node was created.\\r\\n\\r\\n[node:url]"
          }
        },
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Sponsor Request Created",
            "message" : "We\\u0027ve received your sponsorship request and someone will follow up with you soon.\\r\\n\\r\\nThanks\\r\\nDrupalCamp Team",
            "from" : "sponsors@drupalcampottawa.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
