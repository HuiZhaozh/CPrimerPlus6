#include <stdio.h>
#define ADJUST 7.31
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第104页
 * 目的： 带循环的鞋码转换英寸
 */

int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 3.0;
    // 下面的一行代码对书中代码进行了打印格式方面的优化，并不影响读者书中内容的把握
    printf("Shoe size(men's)      foot length\n");  
    while (shoe < 18.5){
        foot = SCALE * shoe + ADJUST;
        // 下面的一行代码对书中代码进行了打印格式方面的优化，并不影响读者书中内容的把握
        printf("%16.1f %9.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}