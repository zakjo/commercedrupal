<?php
// $Id: commerce-product-title.tpl.php,v 1.1 2010/07/12 13:15:16 rszrama Exp $

/**
 * @file
 * Default theme implementation to present the title on a product page.
 *
 * Available variables:
 * - $title: The title to render.
 * - $label: If present, the string to use as the title label.
 *
 * Helper variables:
 * - $product: The fully loaded product object the title belongs to.
 */
?>
<?php if ($title): ?>
  <div class="commerce-product-title">
    <?php if ($label): ?>
      <div class="title-label">
        <?php print $label; ?>
      </div>
    <?php endif; ?>
    <?php print $title; ?>
  </div>
<?php endif; ?>
