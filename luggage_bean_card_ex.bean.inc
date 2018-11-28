<?php
/**
 * @file
 * luggage_bean_card_ex.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_card_ex_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'card_ex';
  $bean_type->label = 'Card Ex';
  $bean_type->options = '';
  $bean_type->description = 'A content card with an image, WYSIWYG content area, and background color options.';
  $export['card_ex'] = $bean_type;

  return $export;
}
