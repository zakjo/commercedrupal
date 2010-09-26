<?php
// $Id: commerce_payment.creditcard.inc,v 1.1 2010/07/12 13:17:13 rszrama Exp $

/**
 * @file
 * Credit-card helper functions for Drupal commerce.
 */

/**
 * Form callback: return a snippet credit card form.
 */
function commerce_payment_creditcard_form() {
  $form['bin'] = array(
    '#type' => 'textfield',
    '#title' => t('Card number'),
    '#default_value' => $_SESSION['clear_cc'] ? '' : $default_num,
    '#attributes' => array('autocomplete' => 'off'),
    '#size' => 20,
    '#maxlength' => 19,
  );
}