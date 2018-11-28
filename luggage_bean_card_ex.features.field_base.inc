<?php
/**
 * @file
 * luggage_bean_card_ex.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function luggage_bean_card_ex_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_card_ex_body'.
  $field_bases['field_card_ex_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_ex_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_card_ex_image'.
  $field_bases['field_card_ex_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_ex_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_card_ex_style'.
  $field_bases['field_card_ex_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_ex_style',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'bean-card-ex_white' => 'White Background',
        'bean-card-ex_red' => 'Red Background',
        'bean-card-ex_blue' => 'Blue Background',
        'bean-card-ex_green' => 'Green Background',
        'bean-card-ex_dark-red' => 'Dark Red Background',
        'bean-card-ex_dark-blue' => 'Dark Blue Background',
        'bean-card-ex_dark-green' => 'Dark Green Background',
        'bean-card-ex_brown' => 'Brown Background',
        'bean-card-ex_grey' => 'Grey Background',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_card_ex_width'.
  $field_bases['field_card_ex_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_card_ex_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'bean-card-ex_width_auto',
        1 => 'bean-card-ex_width_full',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
