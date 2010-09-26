<?php
// $Id: commerce_order_handler_filter_status.inc,v 1.1 2010/08/09 21:13:26 rszrama Exp $

/**
 * Filter by order status
 */
class commerce_order_handler_filter_status extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('Status');

      foreach (commerce_order_statuses() as $name => $status) {
        $options[$name] = $status->title;
      }
      $this->value_options = $options;
    }
  }
}
