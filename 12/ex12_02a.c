#include <stdio.h>
#include "ex12_02.h"
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第409页
 * 目的： Supply a ex12-02.h header file and a ex12-02b.c source code file to make this work. The
 *       source code file should define three file-scope, internal-linkage variables. One represents
 *       the mode, one represents the distance, and one represents the fuel consumed. The get_info()
 *       function prompts for data according to the mode setting and stores the responses in the
 *       file-scope variables. The show_info() function calculates and displays the fuel consumption
 *       based on the mode setting. You can assume the user responds with numeric input.
 *       需和ex12_02b.c联合编译
 */

int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0){
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode: ");
        printf("(-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}
