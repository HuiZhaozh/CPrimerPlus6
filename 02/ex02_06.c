#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第037页
 * 目的： 
 * Write a program that creates an integer variable called toes. Have the program set toes
 * to 10. Also have the program calculate what twice toes is and what toes squared is. The
 * program should print all three values, identifying them.
*/

int main(void)
{
    int toes = 10;
    int toes_twice;
    int toes_squared;

    toes_twice = 2 * toes;
    toes_squared = toes * toes;

    printf("The value of toes is %d\n", toes);
    printf("The value of twice toes is %d\n", toes_twice);
    printf("The value of toes_squared is %d\n", toes_squared);
    return 0;
}