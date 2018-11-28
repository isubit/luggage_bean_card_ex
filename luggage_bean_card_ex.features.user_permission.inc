<?php
/**
 * @file
 * luggage_bean_card_ex.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_card_ex_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any card_ex bean'.
  $permissions['create any card_ex bean'] = array(
    'name' => 'create any card_ex bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any card_ex bean'.
  $permissions['delete any card_ex bean'] = array(
    'name' => 'delete any card_ex bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any card_ex bean'.
  $permissions['edit any card_ex bean'] = array(
    'name' => 'edit any card_ex bean',
    'roles' => array(
      'bean editor' => 'bean editor',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any card_ex bean'.
  $permissions['view any card_ex bean'] = array(
    'name' => 'view any card_ex bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
