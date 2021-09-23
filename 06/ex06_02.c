#include <stdio.h>
#define ROWS 5
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第174页
 * 目的： Use nested loops to produce the following pattern:
         $
         $$
         $$$
         $$$$
         $$$$$
 */

int main(void)
{
    int row;
    int column;

    for (row = 0; row < ROWS; row++){
        for (column = 0; column <= row; column++)
            printf("$");
        printf("\n");
    }
    return 0;
}

