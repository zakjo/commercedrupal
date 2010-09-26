// $Id: commerce_cart.js,v 1.1 2010/09/09 20:42:03 rszrama Exp $

(function ($) {

  /**
   * Make a checkbox element submit its form onclick.
   */
  Drupal.behaviors.commerceCartRemoveCheckbox = {
    attach: function (context, settings) {
      // When the buttons to move from page to page in the checkout process are
      // clicked we disable them so they are not accidently clicked twice.
      $('#commerce-cart-form input.onclick-submit', context).click(function() {
        $('#commerce-cart-form #edit-update').click();
      });
    }
  }

})(jQuery);
