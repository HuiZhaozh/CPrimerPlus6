#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Modify exercise 8 so that it uses a function to return the value of the
 *     calculation.
 */
double calculation(double a, double b);
int main(void)
{
    double a, b;

    printf("Please enter two float-point numbers:\n");
    while (scanf("%lf %lf", &a, &b) == 2){
        printf("The value of their difference divided by their product is:  %f\n",
                calculation(a, b));
        printf("Please enter another pair (non-numeric to quit):\n");
    }
    
    return 0;
}

double calculation(double a, double b){
    return (a-b) / (a*b);
}

