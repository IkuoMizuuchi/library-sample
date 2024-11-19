// ライブラリ関数 average() の定義

#include <stdio.h>
#include "calc.h"

double average(int a, int b, int c) {
    int sum = a+b+c;
    return (sum/3.0);
}
