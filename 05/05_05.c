#include <stdio.h>
#define SQUARES 64              // 国际象棋棋盘的方格数
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第109页
 * 目的： 乘法运算符* --- 计算国际象棋棋盘上小麦个数
 */

int main(void)
{
    const double CROP = 2E16;   // 世界小麦年产谷粒数
    double current, total;
    int count = 1;

    printf("square        grains        total  fraction of\n");
    printf("               added       grains  world total\n");

    total = current = 1.0;
    printf("%6d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES){
        count = count + 1;
        current = 2 * current;
        total = total + current;
        printf("%6d %13.2e %12.2e %12.2e\n", count, current,
                total, total / CROP);
    }
    printf("That's all.\n");
    return 0;
}