#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第141页
 * 目的： 何时终止循环
 */

int main(void)
{
    int n = 5;

    while (n < 7){
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}