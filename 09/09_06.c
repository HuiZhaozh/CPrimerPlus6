#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第257页
 * 目的： 演示递归
 */

void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n){
    printf("Level %d: n location %p\n", n, &n);
    if(n < 4)
        up_and_down(n+1);
    printf("LEVEL %d: n location %p\n", n, &n);
}