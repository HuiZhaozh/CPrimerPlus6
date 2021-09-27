#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： The harmonic mean of two numbers is obtained by taking the inverses of
 *       the two numbers, averaging them, and taking the inverse of the result.
 *       Write a function that takes two double arguments and returns the
 *       harmonic mean of the two numbers.
 */
double harmonic_mean(double i, double j);
int main(void)
{
    double i, j;

    printf("Please enter two numbers: ");
    while (scanf("%lf %lf", &i, &j) == 2){
        printf("The harmonic mean of %lf and %lf is %lf.\n",
               i, j, harmonic_mean(i, j));
        printf("Next two numbers (q to quit): ");
    }
    printf("Bye.\n");

    return 0;
}

double harmonic_mean(double i, double j){
    return 1 / ((1/i + 1/j)/2);
}

