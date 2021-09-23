#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Write a program that requests lower and upper integer limits, calculates
 *     the sum of all the integer squares from the square of the lower limit to
 *     the square of the upper limit, and displays the answer. The program should
 *     then continue to prompt for limits and display answers until the user enters
 *     an upper limit that is equal to or less than the lower limit. A sample run
 *     should look something like this:
       Enter lower and upper integer limits: 5 9
       The sums of the squares from 25 to 81 is 255
       Enter next set of limits: 3 25
       The sums of the squares from 9 to 625 is 5520
       Enter next set of limits: 5 5
       Done
 */

int main(void)
{
    int lower_limit;
    int upper_limit;
    int i;
    int square_sum;

    printf("Enter lower and upper integer limits: ");
    while (scanf("%d %d", &lower_limit, &upper_limit)==2 && lower_limit < upper_limit){
        square_sum = 0;
        for (i = lower_limit; i <= upper_limit; i++)
            square_sum += i*i;
        printf("The sum of the squares from %d to %d is %d\n", lower_limit, upper_limit, square_sum);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower_limit, &upper_limit);
    }
    printf("See you next time!\n");
    
    return 0;
}

