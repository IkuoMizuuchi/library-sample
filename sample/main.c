// ライブラリ（libgreet.aまたはlibgreet.dll）を使うサンプル）

#include <stdio.h>
#include <greet.h>
// <>は/usr/include or /usr/local/include からインクルードする
// ""は上記以外（カレントディレクトリなど）からインクルードする。

int main(int ac, char *av[]) {
  printf("This is the main.\n");
  hello();
  goodbye();
  return 0;
}
