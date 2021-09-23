#include <stdio.h>
#define ROWS 6
#define CHARS 10
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第162页
 * 目的： 嵌套循环
 */

int main(void)
{
    int row;
    char ch;

    for ( row = 0; row < ROWS; row++){
        for (ch = 'A'; ch < 'A' + CHARS; ch++)
            printf("%c", ch);
        printf("\n");
    }
    
    return 0;
}