#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第068页
 * 目的： 
 *     Write a program that asks you to enter an ASCII code value, such as 66,
 *     and then print the character having that ASCII code.
 */

int main(void)
{
    char ascii;

    printf("Enter an ASCII code value:\n");
    scanf("%d", &ascii);
    printf("The character having ASCII code %d is %c.\n",
            ascii, ascii);
    return 0;
}