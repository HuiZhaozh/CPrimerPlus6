#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Write a program that prints a table with each line giving an integer,
 *     its square, and its cube. Ask the user to input the lower and upper limits
 *     for the table. Use a for loop.
 */

int main(void)
{
    int lower_limit;
    int upper_limit;
    int i;

    printf("Please enter the lower limit for the table:\n");
    scanf("%d", &lower_limit);
    printf("Please enter the upper limit for the table:\n");
    scanf("%d", &upper_limit);

    printf("%5s %10s %15s\n", "int", "square", "cube");
    for(i = lower_limit; i <= upper_limit; i++){
        printf("%5d %10d %15d\n", i, i*i, i*i*i);
    }
    return 0;
}