#include <stdio.h>
#define SIZE 4
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第280页
 * 目的： 部分初始化的数组
 */

int main(void)
{
    int no_data[SIZE] = {1492, 1066};
    int index;

    printf("%2s%14s\n", "i", "no_data[i]");
    for ( index = 0; index < SIZE; index++){
        printf("%2d%14d\n", index, no_data[index]);
    }
    
    return 0;
}