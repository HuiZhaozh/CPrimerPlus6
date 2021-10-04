#include <stdio.h>
#define STLEN 14
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第332页
 * 目的： fgets和fputs函数
 */

int main(void)
{
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your stirng twice(puts(). the fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your stirng twice(puts(). the fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    
    return 0;
}