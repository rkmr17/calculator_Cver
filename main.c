#include <stdio.h>

//メニュー表示関数
  void displayMenu() {
    printf("===== 電卓メニュー =====\n");
    printf("1. 加算\n");
    printf("2. 減算\n");
    printf("3. 乗算\n");
    printf("4. 除算\n");
    printf("5. 終了\n");
    printf("========================\n");
    printf("選択してください：");
  }

int main() {
  //プログラム起動時メッセージ
  printf("電卓アプリケーション\n");

  displayMenu();

  //ユーザー選択
  int choice;
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    //加算
    break;
  case 2:
    //減算
    break;
  case 3:
    //乗算
    break;
  case 4:
    //除算
    break;
  case 5:
    printf("プログラムを終了します。\n");
    break;
  default:
    printf("無効な選択です。\n");
    break;
  }

  return 0;
}