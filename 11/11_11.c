#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第337页
 * 目的： 在scanf函数中指定字段宽度
 */

int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);
    return 0;
}