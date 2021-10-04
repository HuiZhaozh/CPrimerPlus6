#include <stdio.h>
#define STLEN 10
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第333页
 * 目的： fgets函数的返回值NULL
 */

int main(void)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin)!=NULL && words[0]!='\n')
        fputs(words, stdout);
    printf("Done.");
    
    return 0;
}