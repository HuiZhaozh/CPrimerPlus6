#include <stdio.h>
#define M_PER_H 60              //1小时 = 60分钟
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第134页
 * 目的： 
 *     Write a program that converts time in minutes to time in hours and minutes.
 *     Use #define or const to create a symbolic constant for 60. Use a while loop
 *     to allow the user to enter values repeatedly and terminate the loop if a value
 *     for the time of 0 or less is entered.
 */

int main(void)
{
    int time_in_minute;
    int hour;
    int min;

    printf("Please enter the time to convert in minutes:\n");
    scanf("%d", &time_in_minute);
    while (time_in_minute > 0){
        hour = time_in_minute / M_PER_H;
        min  = time_in_minute % M_PER_H;
        printf("%d minutes equals to %d hours and %d minutes.\n",
                time_in_minute, hour, min);
        printf("Please enter another time (<=0 to quit):\n");
        scanf("%d", &time_in_minute);
    }
    
    return 0;
}

