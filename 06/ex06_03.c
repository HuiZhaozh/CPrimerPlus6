#include <stdio.h>
#define ROWS 6
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第174页
 * 目的： Use nested loops to produce the following pattern:
         F
         FE
         FED
         FEDC
         FEDCB
         FEDCBA
 */

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++){
        for (ch = 'F'; ch >= 'F' - row; ch--)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}


