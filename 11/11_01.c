#include <stdio.h>
#define MSG "I am a symbolic string consttan"
#define MAXLENGTH 81
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第321页
 * 目的： 字符串的几种表示形式
 */

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");                         //puts自动在显示字符串后面多输出一个换行符
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}
