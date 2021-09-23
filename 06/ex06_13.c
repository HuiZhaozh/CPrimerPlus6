#include <stdio.h>
#define SIZE 8
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Write a program that creates an eight-element array of ints and sets the
 *     elements to the first eight powers of 2 and then prints the values. Use a
 *     for loop to set the values, and, for variety, use a do while loop to display
 *     the values.
 */

int main(void)
{
    int two_power[SIZE];
    int value = 1;
    int i;

    for (i = 0; i < SIZE; i++){
        two_power[i] = value;
        value *= 2;
    }

    i = 0;
    do{
        printf("%d ", two_power[i]);
        i++;
    } while (i < SIZE);
    printf("\n");
        
    return 0;
}
