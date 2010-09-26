<?php
// $Id: commerce_product_handler_field_product_type.inc,v 1.1 2010/07/12 13:15:29 rszrama Exp $

/**
 * Field handler to translate a product type into its readable form.
 */
class commerce_product_handler_field_product_type extends commerce_product_handler_field_product {
  function render($values) {
    $value = commerce_product_type_get_name($values->{$this->field_alias});

    return $this->render_link((check_plain($value)), $values);
  }
}
