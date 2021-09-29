#include <stdio.h>
#define MONTHS 12
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第281页
 * 目的： 指定初始化器
 */

int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int index;

    for (index = 0; index < MONTHS; index++){
        printf("Month %2d has %2d days.\n", index+1, days[index]);
    }
    
    return 0;
}