#include <stdio.h>
#define STLEN 10
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第334页
 * 目的： 处理fgets函数的换行或者多余的字符
 */

int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin)!=NULL && words[0]!='\n'){
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
        puts(words);
    }
        
    printf("Done.");
    
    return 0;
}