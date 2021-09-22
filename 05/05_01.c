#include <stdio.h>
#define ADJUST 7.31
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第103页
 * 目的： 不带循环的鞋码转换英寸
 */

int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    // 下面的两行代码对书中代码进行了打印格式方面的优化，并不影响读者书中内容的把握
    printf("Shoe size(men's)      foot length\n");
    printf("%16.1f %9.2f inches\n", shoe, foot);
    return 0;
}