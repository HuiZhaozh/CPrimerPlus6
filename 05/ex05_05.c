#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第134页
 * 目的： 
 *     Change the program addemup.c (Listing 5.13), which found the sum of the
 *     first 20 integers. (If you prefer, you can think of addemup.c as a program
 *     that calculates how much money you get in 20 days if you receive $1 the
 *     first day, $2 the second day, $3 the third day, and so on.) Modify the
 *     program so that you can tell it interactively how far the calculation
 *     should proceed. That is, replace the 20 with a variable that is read in.
 */


int main(void)
{
    int count, end, sum;

    count = 0;
    sum = 0;
    printf("Please enter the end:\n");
    scanf("%d", &end);
    while (count++ < end){
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    return 0;
}

