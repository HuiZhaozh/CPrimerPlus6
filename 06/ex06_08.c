#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Write a program that requests two floating-point numbers and prints the
 *     value of their difference divided by their product. Have the program loop
 *     through pairs of input values until the user enters nonnumeric input.
 */
int main(void)
{
    double a, b;

    printf("Please enter two float-point numbers:\n");
    while (scanf("%lf %lf", &a, &b) == 2){
        printf("The value of their difference divided by their product is:  %f\n",
                (a-b) / (a*b));
        printf("Please enter another pair (non-numeric to quit):\n");
    }
    
    return 0;
}

