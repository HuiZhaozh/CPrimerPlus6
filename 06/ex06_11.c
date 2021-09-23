#include <stdio.h>
#define SIZE 8
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Write a program that reads eight integers into an array and then prints
 *     them in reverse order.
 */

int main(void)
{
    int array[SIZE];
    int i;

    printf("Please enter eight integers:\n");
    for (i = 0; i < SIZE; i++)
        scanf("%d", &array[i]);
    for (i = SIZE - 1; i >= 0;i--)
        printf("%d ", array[i]);
    return 0;
}