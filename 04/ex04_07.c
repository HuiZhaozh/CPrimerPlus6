#include <stdio.h>
#include <float.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第101页
 * 目的： 
 *     Write a program that sets a type double variable to 1.0/3.0 and a type float variable
 *     to 1.0/3.0. Display each result three times
 *     once showing four digits to the right of the decimal, 
 *     once showing 12 digits to the right of the decimal, 
 *     and once showing 16 digits to the right of the decimal. 
 *     Also have the program include float.h and display the values of FLT_DIG and DBL_DIG. 
 *     Are the displayed values of 1.0/3.0 consistent with these values?
 */

int main(void)
{
    double nd = 1.0 / 3.0;
    float fd = 1.0 / 3.0;

    printf("%20s %20s\n", "double values", "float values");
    printf("%20.4lf %20.4f\n", nd, fd);
    printf("%20.12lf %20.12f\n", nd, fd);
    printf("%20.16lf %20.16f\n", nd, fd);
    printf("%20d %20d\n", DBL_DIG, FLT_DIG);
    return 0;
}

