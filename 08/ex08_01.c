#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-26
 * 页码： 第241页
 * 目的： Devise a program that counts the number of characters in its input up to
 *       the end of file.
 */

int main(void)
{
    int count = 0;

    while (getchar() != EOF)
        ++count;
    printf("The number of characters in the input is %d.\n", count);
    return 0;
}