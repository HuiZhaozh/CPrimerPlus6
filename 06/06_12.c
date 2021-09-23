#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第151页
 * 目的： 使用for语句打印一个立方表
 */

int main(void)
{
    int num;

    printf("    n n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %7d\n", num, num * num * num);
    
    return 0;
}