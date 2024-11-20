// ライブラリ関数 average() の定義

#include <stdio.h>
#include "calc.h"

double average(int a, int b, int c) {
    int sum = a+b+c;
    double ret = sum/3.0;
    printf("a=%d, b=%d, c=%d, sum=%d, ret=%f\n", a, b, c, sum, ret);
    return (ret);
}
