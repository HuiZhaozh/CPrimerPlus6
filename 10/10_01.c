#include <stdio.h>
#define MONTHS 12
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第278页
 * 目的： 初始化数组
 */

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++){
        printf("Month %2d has %2d days.\n", index+1, days[index]);
    }
    
    return 0;
}