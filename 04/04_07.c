#include <stdio.h>
#define PAGES 959
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第084页
 * 目的： printf中整数使用修饰符和标记
 */

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}