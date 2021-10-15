#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#define PR(X, ...) printf("Message "#X": " __VA_ARGS__)
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第529页
 * 目的： 可变参数的宏
 */ 

int main(void)
{
    double x = 48;
    double y;

    y = sqrt(x);
    PR(1, "x = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y);
    
    return 0;
}

