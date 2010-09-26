<?php
// $Id: commerce_line_item.info.inc,v 1.2 2010/05/20 04:08:50 rszrama Exp $

/**
 * @file
 * Provides metadata for the line item entity.
 */

/**
 * Implements hook_entity_property_info().
 */
function commerce_line_item_entity_property_info() {
  $info = array();

  // Add meta-data about the basic commerce_line_item properties.
  $properties = &$info['commerce_line_item']['properties'];

  $properties['line-item-id'] = array(
    'label' => t('Line item ID'),
    'description' => t('The internal numeric ID of the line item.'),
    'type' => 'integer',
  );
  $properties['type'] = array(
    'label' => t('Type'),
    'description' => t('The human readable name of the line item type.'),
    'type' => 'text',
    'options list' => 'commerce_line_item_type_get_name',
    'required' => TRUE,
    'query callback' => 'entity_metadata_table_query',
  );
  $properties['line-item-label'] = array(
    'label' => t('Line item label'),
    'description' => t('The label displayed with the line item.'),
    'type' => 'text',
    'setter callback' => 'entity_metadata_verbatim_set',
    'required' => TRUE,
    'query callback' => 'entity_metadata_table_query',
  );

  return $info;
}
