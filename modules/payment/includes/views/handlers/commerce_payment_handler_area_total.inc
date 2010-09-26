<?php
// $Id: commerce_payment_handler_area_total.inc,v 1.1 2010/07/12 13:17:13 rszrama Exp $

class commerce_payment_handler_area_total extends views_handler_area {
  function render($empty = FALSE) {
    $rows[] = array(
      t('Total price'),
      'test',
    );
    $rows[] = array(
      t('Balance'),
      'toto',
    );

    return theme('table', array('rows' => $rows));
  }
}
