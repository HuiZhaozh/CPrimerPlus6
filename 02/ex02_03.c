#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第037页
 * 目的：  Write a program that converts your age in years to days and displays both values. 
 *        At this point, don't worry about fractional years and leap years.
 */

int main(void)
{
    int years, days;

    years = 18;
    days = 365 * years;
    printf("An age of %d years is %d days.\n", years, days);
    return 0;
}