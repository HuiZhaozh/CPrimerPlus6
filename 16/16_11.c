#include <stdio.h>
#include "16_10.h"
#include "16_10.h"              // 不小心第2次包含了头文件
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第538页
 * 目的： #ifndef
 */ 

int main(void)
{
    names winner = {"Less", "Ismoor"};
    
    printf("The winner is %s %s\n", winner.first, winner.last);
    return 0;
}