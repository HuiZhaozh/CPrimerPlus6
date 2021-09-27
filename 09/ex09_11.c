#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Write and test a Fibonacci() function that uses a loop instead of recursion to calculate
 *       Fibonacci numbers.
 */

void Fibonacci(int n);

int main(void)
{
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);
    Fibonacci(n);
    printf("Bye.\n");
    return 0;
}

void Fibonacci(int n){
    int Fn1 = 1;
    int Fn2 = 1;
    int Fn = Fn1 + Fn2;

    printf("All Fibonacci numbers that smaller than %d are: \n", n);
    printf("%d\n%d\n", Fn1, Fn2);
    while (Fn < n){
        printf("%d\n", Fn);
        Fn1 = Fn2;
        Fn2 = Fn;
        Fn = Fn1 +Fn2;
    }
}

