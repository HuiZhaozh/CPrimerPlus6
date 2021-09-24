#include <stdio.h>
#include <ctype.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第182页
 * 目的： ctype系列的字符函数
 */

int main(void)
{
    char ch;
    
    while ((ch = getchar()) != '\n'){
        if ( isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    printf("\n");           // 打印最后的换行符
    
    return 0;
}