<?php
// $Id: commerce-cart-block.tpl.php,v 1.4 2010/08/12 01:20:54 rszrama Exp $

/**
 * @file
 * Default implementation of the shopping cart block template.
 *
 * Available variables:
 * - $contents_view: A rendered View containing the contents of the cart.
 *
 * Helper variables:
 * - $order: The full order object for the shopping cart.
 *
 * @see template_preprocess()
 * @see template_process()
 */
?>
<div class="cart-contents">
  <?php print $contents_view; ?>
</div>
