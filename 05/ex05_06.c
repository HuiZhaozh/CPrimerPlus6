#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第134页
 * 目的： 
 *     Now modify the program of Programming Exercise 5 so that it computes the
 *     sum of the squares of the integers. (If you prefer, how much money you receive
 *     if you get $1 the first day, $4 the second day, $9 the third day, and so on. 
 *     This looks like a much better deal!) 
 *     C doesn't have a squaring function, but you can use the fact that the
 *     square of n is n * n
 */

int main(void)
{
    int count, end, sum;

    count = 0;
    sum = 0;
    printf("Please enter the end:\n");
    scanf("%d", &end);
    while (count++ < end){
        sum = sum + count * count;
    }
    printf("sum = %d\n", sum);
    return 0;
}

