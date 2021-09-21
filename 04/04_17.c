#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第096页
 * 目的： scanf中*的抑制作用
 */

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);
    return 0;
}