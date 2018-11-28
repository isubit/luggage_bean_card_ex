<?php 
  $class = NULL; 
  if (isset($bean->field_card_ex_width['und'][0]['value']) && $bean->field_card_ex_width['und'][0]['value'] == 1 ) : 
    $class = 'bean-card-ex_width_full'; 
  endif; ?>

<div class="bean-card-ex <?php if(isset($bean->field_card_ex_style['und'][0]['value'])): print $bean->field_card_ex_style['und'][0]['value']; endif; ?> <?php print $class ?>"  <?php print $attributes; ?>>

  <?php print render($title_suffix) ?>

  <div class="bean-card-ex_wrap">

    <?php if (isset($bean->field_card_ex_image['und'][0]['uri'])): ?>
      <div class="bean-card-ex_img">
        <img src="<?php print file_create_url($bean->field_card_ex_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_card_ex_image['und'][0]['alt']; ?>" />
      </div>
    <?php endif; ?>

    <?php if (isset($bean->field_card_ex_body['und'][0]['value'])): ?>
      <div class="bean-card-ex_content">
        <?php print $bean->field_card_ex_body['und'][0]['value']; ?>
      </div>
    <?php endif ?>

  </div>

</div>