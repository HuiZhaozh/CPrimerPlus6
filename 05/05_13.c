#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第121页
 * 目的： 常见的语句
 */

int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20){
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    return 0;
}