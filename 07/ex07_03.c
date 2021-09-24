#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： Write a program that reads integers until 0 is entered. After input
 *       terminates, the program should report the total number of even integers
 *       (excluding the 0) entered, the average value of the even integers, the
 *       total number of odd integers entered, and the average value of the odd
 *       integers.
 */

int main(void)
{
    int count_even = 0;
    int count_odd = 0;
    double sum_even = 0.0;
    double sum_odd = 0.0;
    int i;

    printf("Please enter your numbers:\n");
    while (scanf("%d", &i) == 1 && i!=0){
        if(i % 2 == 0){
            count_even++;
            sum_even += i;
        }else{
            count_odd++;
            sum_odd += i;
        }
    }
    printf("The number of evens: %d\n", count_even);
    if(count_even > 0)
        printf("The average value of evens: %g\n", sum_even / count_even);
    printf("The number of odds: %d\n", count_odd);
    if(count_odd > 0)
        printf("The average value of odds: %g\n", sum_odd / count_odd);
    return 0;
}

