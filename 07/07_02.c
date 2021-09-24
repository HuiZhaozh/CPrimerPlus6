#include <stdio.h>
#define SPACE ' '           // 空格字符
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第181页
 * 目的： getchar、putchar函数
 */

int main(void)
{
    char ch;
    ch = getchar();
    while (ch != '\n'){
        if ( ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    printf("\n");           // 打印最后的换行符
    
    return 0;
}