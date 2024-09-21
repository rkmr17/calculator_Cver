#include <stdio.h>

int main() {
  //プログラム起動時メッセージ
  printf("電卓アプリケーション");

  void displayMenu() {
    printf("===== 電卓メニュー =====\n");
    printf("1. 加算\n");
    printf("2. 減算\n");
    printf("3. 乗算\n");
    printf("4. 除算\n");
    printf("5. 終了\n");
    printf("=======================\n");
    printf("選択してください");
  }

  displayMenu();

  return 0;
}