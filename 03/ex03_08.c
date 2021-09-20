#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第069页
 * 目的： 
 * In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
 * ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
 * volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
 * and teaspoons. Why does a floating-point type make more sense for this application than
 * an integer type?
 */

int main(void)
{
    double pints, cups, ounces, tablespoons, teaspoons;

    printf("Please enter a volume in cups:\n");
    scanf("%lf", &cups);
    pints = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;

    printf("%.2lf cups equal %.2lf pints.\n", cups, pints);
    printf("%.2lf cups equal %.2lf ounces.\n", cups, ounces);
    printf("%.2lf cups equal %.2lf tablespoons.\n", cups, tablespoons);
    printf("%.2lf cups equal %.2lf teaspoons.\n", cups, teaspoons);

    return 0;
}
