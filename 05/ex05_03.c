#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第134页
 * 目的： 
 *     Write a program that asks the user to enter the number of days and then
 *     converts that value to weeks and days. For example, it would convert 18
 *     days to 2 weeks, 4 days. Display results in the following format:
           18 days are 2 weeks, 4 days.
 *     Use a while loop to allow the user to repeatedly enter day values;
       terminate the loop when the user enters a nonpositive value, such as 0 or -20.
 */

int main(void)
{
    const int DAYS_PER_WEEK = 7;
    int n, days, weeks;

    printf("Please enter the number of days:\n");
    scanf("%d", &n);
    while (n > 0){
        weeks = n / DAYS_PER_WEEK;
        days = n % DAYS_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n", n, weeks, days);
        printf("Please enter another number of days (<= 0 to quit):\n");
        scanf("%d", &n);
    }
    printf("See you next time!\n");

    return 0;
}