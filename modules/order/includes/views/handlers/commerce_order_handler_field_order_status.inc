<?php
// $Id: commerce_order_handler_field_order_status.inc,v 1.1 2010/07/12 13:15:03 rszrama Exp $

/**
 * Field handler to translate an order status into its readable form.
 */
class commerce_order_handler_field_order_status extends commerce_order_handler_field_order {
  function render($values) {
    $value = commerce_order_status_get_title($values->{$this->field_alias});

    return $this->render_link((check_plain($value)), $values);
  }
}
