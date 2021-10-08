#include <stdio.h>
#include "ex12_03.h"
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第410页
 * 目的： Redesign the program described in Programming Exercise 2 so that it uses only automatic
 *       variables. Have the program offer the same user interface-that is, it should prompt the
 *       user to enter a mode, and so on. You'll have to come up with a different set of function
 *       calls, however.
 *       需和ex12_03b.c联合编译
 */

int main(void)
{
    int mode;
    double distance, fuel;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0){
        set_mode(&mode);
        get_info(mode, &distance, &fuel);
        show_info(mode, distance, fuel);
        printf("Enter 0 for metric mode, 1 for US mode: ");
        printf("(-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}

