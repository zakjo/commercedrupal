<?php
// $Id: commerce-product-sku.tpl.php,v 1.1 2010/07/12 13:15:16 rszrama Exp $

/**
 * @file
 * Default theme implementation to present the SKU on a product page.
 *
 * Available variables:
 * - $sku: The SKU to render.
 * - $label: If present, the string to use as the SKU label.
 *
 * Helper variables:
 * - $product: The fully loaded product object the SKU represents.
 */
?>
<?php if ($sku): ?>
  <div class="commerce-product-sku">
    <?php if ($label): ?>
      <div class="sku-label">
        <?php print $label; ?>
      </div>
    <?php endif; ?>
    <?php print $sku; ?>
  </div>
<?php endif; ?>