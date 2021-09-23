#include <stdio.h>
#define ROWS 6
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： Use nested loops to produce the following pattern:
         A
         BC
         DEF
         GHIJ
         KLMNO
         PORSTU
 */

int main(void)
{
    int row;
    int count = 0;
    char ch;

    for (row = 0; row < ROWS; row++){
        for (ch = 'A' + count; ch <= 'A' + count + row; ch++)
            printf("%c", ch);
        count += (row + 1);
        printf("\n");
    }
    return 0;
}

