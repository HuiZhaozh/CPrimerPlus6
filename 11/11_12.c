#include <stdio.h>
#define DEF "I am a #define string."
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第338页
 * 目的： puts函数
 */

int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me.";

    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2+4);

    return 0;
}