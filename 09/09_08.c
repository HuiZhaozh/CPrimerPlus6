#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第261页
 * 目的： 递归和倒序计算
 */

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;

    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1){
        to_binary(number);
        putchar('\n');
    printf("Enter an integer (q to quit):\n");
    }
    printf("Done!\n");
    return 0;
}

void to_binary(unsigned long n){
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n/2);
    putchar(r==0? '0': '1');   
}