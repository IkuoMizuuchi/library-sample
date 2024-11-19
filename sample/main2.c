// ライブラリ（libgreetおよびlibcalc）を使うサンプル）

#include <stdio.h>
#include <greet.h>
#include <calc.h>
// <>は/usr/include or /usr/local/include からインクルードする
// ""は上記以外（カレントディレクトリなど）からインクルードする。

int main(int ac, char *av[]) {
  printf("This is the main.\n");
  hello();
  goodbye();
  printf("average=%lf\n", average(1, 5, 10));
  return 0;
}
