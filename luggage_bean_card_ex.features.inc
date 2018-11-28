<?php
/**
 * @file
 * luggage_bean_card_ex.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_bean_card_ex_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
