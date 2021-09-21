#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第091页
 * 目的： printf打印较长的字符串的3种方法
 */

int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");

    printf("Here's another way to print a \
long string.\n");

    //多个字符串之间用空白符(空格、制表、回车)隔开，C编译器会把多个字符串看成一个字符串
    printf("Here's the newest way to print a "
           "long string.\n");
    return 0;
}