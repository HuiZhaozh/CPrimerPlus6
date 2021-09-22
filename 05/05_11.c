#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第116页
 * 目的： 递增运算符的特别有用的特性
 */

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;
    pre_b = ++b;
    printf("a a_post     b  pre_b\n");
    printf("%1d %6d %5d %5d\n", a, a_post, b, pre_b);
    return 0;
}