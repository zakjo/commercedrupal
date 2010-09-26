<?php
// $Id: commerce_payment_handler_field_status.inc,v 1.1 2010/07/12 13:17:13 rszrama Exp $

/**
 * Field handler for the payment transaction status.
 */
class commerce_payment_handler_field_status extends views_handler_field {
  function render($values) {
    return '<span class="' . drupal_html_class($values->{$this->field_alias}) . '">' . check_plain($values->{$this->field_alias}) . '</span>';
  }
}
