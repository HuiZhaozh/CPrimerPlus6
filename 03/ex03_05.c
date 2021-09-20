#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第069页
 * 目的： 
 * There are approximately 3.156 x 10^7 seconds in a year. Write a program that requests
 * your age in years and then displays the equivalent number of seconds.
 */

int main(void)
{
    long age_years, age_seconds;

    printf("Please enter your age in years:\n");
    scanf("%ld", &age_years);
    age_seconds = age_years * 3.156e7;
    printf("Your age in seconds is %ld seconds.\n", age_seconds);
    return 0;
}

