# Drupal 7 Rules モジュール サンプル

Rules のイベントを定義、利用しています。

利用方法:

1. Drupal 7 のインスタンスにこのモジュールをインストール
    - `git clone https://github.com/gh640/drupal_rules_event_example hayato`
    - `mv hayato DRUPAL_ROOT/sites/all/modules/`
    - `cd DRUPAL_ROOT`
    - `drush en hayato`
2. Rules UI をインストール
    - `drush dl rules`
    - `drush en rules_admin`
3. Rules の管理画面でルールを作成
    - `/admin/config/workflow/rules` にアクセス
    - ルールを新規作成
    - イベントに `After Hayato special completed` を選択
    - 適当にイベントを完成
4. サイトのパス `/hayato/special` にアクセス
5. ボタンが 1 つ表示されるのでクリックする
6. 3 で作成したルールが発火したことを確認する

ステップ 3 がうまく行かない場合は `config/rules_show_special_message.json` をインポートする形でサンプルルールを作成することも可能です。
