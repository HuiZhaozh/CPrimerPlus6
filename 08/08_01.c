#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第217页
 * 目的： getchar和putchar
 */

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}