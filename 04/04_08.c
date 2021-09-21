#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第085页
 * 目的： printf中浮点数使用修饰符和标记
 */

int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    return 0;
}