<?php
// $Id: commerce-product-status.tpl.php,v 1.1 2010/07/12 13:15:16 rszrama Exp $

/**
 * @file
 * Default theme implementation to present the status on a product page.
 *
 * Available variables:
 * - $status: The string representation of a product's status to render.
 * - $label: If present, the string to use as the status label.
 *
 * Helper variables:
 * - $product: The fully loaded product object the status belongs to.
 */
?>
<?php if ($status): ?>
  <div class="commerce-product-status">
    <?php if ($label): ?>
      <div class="status-label">
        <?php print $label; ?>
      </div>
    <?php endif; ?>
    <?php print $status; ?>
  </div>
<?php endif; ?>
