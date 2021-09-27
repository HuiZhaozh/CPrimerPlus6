#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Devise a function called min(x,y) that returns the smaller of two double
 *       values. Test the function with a simple driver.
 */

double min(double a, double b);

int main(void)
{
    double x,  y;

    printf("Please enter two numbers (q to quit): ");

    while (scanf("%lf %lf", &x, &y) == 2){
        printf("The smaller one is %f.\n", min(x, y));
        printf("The next two numbers (q to quit): ");
    }
    
    return 0;
}

double min(double a, double b){
    return a<b? a: b;
}