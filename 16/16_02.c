#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X);
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第526页
 * 目的： #define定义的函数宏
 */

int main(void)
{
    int x = 5;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(x): ");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(2): ");
    PR(z);
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x+2));
    printf("Evaluating 100/SQUARE(2) : ");
    PR(100/SQUARE(2));
    printf("x = %d\n", x);
    printf("Evaluating SQUARE(++x) : ");
    PR(SQUARE(++x));
    printf("After incrementing, x is %d.\n", x);
    return 0;
}