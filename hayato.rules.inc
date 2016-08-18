<?php

/**
 * Implements hook_rules_event_info().
 */
function hayato_rules_event_info() {

  $items = array(
    // 特別な処理が完了したときに発動するイベント
    'hayato_special_completed' => array(
      'label' => t('After Hayato special completed'),
      'group' => t('hayato'),
      'variables' => array(
        'user' => array(
          'type' => 'user',
          'label' => t('User who triggered the Hayato special.'),
        ),
        'messages' => array(
          'type' => 'list<text>',
          'label' => t('Generated messages in the process.'),
        ),
      ),
    ),

  );

  return $items;
}
