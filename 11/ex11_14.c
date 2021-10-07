#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第372页
 * 目的： Write a power-law program that works on a command-line basis. The first command-line
 *       argument should be the type double number to be raised to a certain power, and the
 *       second argument should be the integer power.
 */

int main(int argc, char * argv[])
{
    double num;
    int exp;

    if(argc != 3){
        printf("Usage: %s number exponent\n", argv[0]);
        return 1;
    }else{
        num = atof(argv[1]);
        exp = atoi(argv[2]);
        printf("%f to the %d power = %f\n", num, exp, pow(num, (double)exp));
        return 0;
    }
}

