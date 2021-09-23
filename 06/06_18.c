#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第163页
 * 目的： 嵌套循环变式
 */

int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++){
        for (ch = 'A' + row; ch < 'A' + CHARS; ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}