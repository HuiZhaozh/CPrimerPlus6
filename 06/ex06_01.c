#include <stdio.h>
#define SIZE 26
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第174页
 * 目的： 
 *     Write a program that creates an array with 26 elements and store the 26
 *     lowercase letters in it. Also have it shows the array contents.
 */

int main(void)
{
    char lowercase[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        lowercase[i] = 'a' + i;
    printf("The array contents:\n");
    for (i = 0; i < SIZE; i++)
        printf("%c ", lowercase[i]);
    printf("\n");
    return 0;
}
