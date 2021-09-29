#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第280页
 * 目的： 省略数组大小的初始化数组
 */

int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof(days) / sizeof(days[0]) ; index++){
        printf("Month %2d has %2d days.\n", index+1, days[index]);
    }
    
    return 0;
}