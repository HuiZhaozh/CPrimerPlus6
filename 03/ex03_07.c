#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第069页
 * 目的： 
 * There are 2.54 centimeters to the inch. Write a program that asks you to enter your
 * height in inches and then displays your height in centimeters. Or, if you prefer, ask for
 * the height in centimeters and converts that to inches.
 */

int main(void)
{
    double height_centimeters, height_inches;
    const double centimeters_to_inch = 2.54;

    printf("Please enter your height in inches:\n");
    scanf("%lf", &height_inches);
    height_centimeters = centimeters_to_inch * height_inches;
    printf("Your height in centimeters is %lf\n", height_centimeters);

    return 0;
}

