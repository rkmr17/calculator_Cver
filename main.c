#include <stdio.h>
#include "include/calculator.h"

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

//ユーザー入力関数
  void userInput(int *num1, int *num2) {
    printf("最後の数字を入力してください：");
    scanf("%d", num1);

    printf("次の数字を入力してください：");
    scanf("%d", num2);
  }

//加算関数
int add(int num1, int num2) {
  return num1 + num2;
}

//減算関数
int subtrac(int num1, int num2) {
  return num1 - num2;
}

//乗算関数
int multiply(int num1, int num2) {
  return num1 * num2;
}

//除算関数
int divide(int num1, int num2) {
  if (num2 == 0) {
    printf("0では割り切れません\n");
    return 0;
  }
  return num1 / num2;
}

int main() {
  //プログラム起動時メッセージ
  printf("電卓アプリケーション\n");
  int choice, num1, num2, result;

do {
  displayMenu();

  //ユーザー選択
  
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    //加算
    userInput(&num1, &num2);
    result = add(num1, num2);
    printf("結果：%d + %d = %d\n", num1, num2, result);
    break;
  case 2:
    //減算
    userInput(&num1, &num2);
    result = subtrac(num1, num2);
    printf("結果：%d - %d = %d\n", num1, num2, result);
    break;
  case 3:
    //乗算
    userInput(&num1, &num2);
    result = multiply(num1, num2);
    printf("結果：%d * %d = %d\n", num1, num2, result);
    break;
  case 4:
    //除算
    userInput(&num1, &num2);
    result = divide(num1, num2);
    printf("結果：%d / %d = %d\n", num1, num2, result);
    break;
  case 5:
    printf("プログラムを終了します。\n");
    return 0;
  default:
    printf("無効な選択です。\n");
    break;
  }

  printf("続けて計算しますか（y/n）:");
  char keepChoice;
  scanf(" %c", &keepChoice);
  switch (keepChoice) {
  case 'y':
    break;
  case 'n':
    choice = 5;
    printf("プログラムを終了します。\n");
    break;
  default:
    printf("無効な選択です。\n");
    break;
  }

} while (choice != 5);

  return 0;
}