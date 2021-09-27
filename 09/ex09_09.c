#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Redo Programming Exercise 8, but this time use a recursive function.
 */

double power(double n, int p);      // 返回n的p次幂

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\n the number will be raised, Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2){
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}

double power(double n, int p){
    double pow = 1;
    int i;

    if(p > 0){
        pow = n * power(n, p-1);
    }else if(p < 0)
        pow = 1 / power(n, -p);
    else if(p == 0 && n == 0){
        printf("0 to the 0 is undefined, and it's using the value of 1.\n");
        pow = 1;
    }else
        pow = 1;
    return pow;
}


