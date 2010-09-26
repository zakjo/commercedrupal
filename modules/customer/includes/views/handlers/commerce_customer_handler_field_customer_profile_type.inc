<?php
// $Id: commerce_customer_handler_field_customer_profile_type.inc,v 1.1 2010/08/20 23:15:12 rszrama Exp $

/**
 * Field handler to translate a customer profile type into its readable form.
 */
class commerce_customer_handler_field_customer_profile_type extends commerce_customer_handler_field_customer_profile {
  function render($values) {
    $value = commerce_customer_profile_type_get_name($values->{$this->field_alias});

    return $this->render_link((check_plain($value)), $values);
  }
}
