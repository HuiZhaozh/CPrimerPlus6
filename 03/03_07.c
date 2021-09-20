#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第058页
 * 目的： 打印浮点数
 */

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    

    printf("%f can be written %e\n", aboat, aboat);
    printf("And it's %a in hexdecimal, power of 2 notation\n", aboat);
    printf("%f can be writeen %e\n", abet, abet);
    printf("%Lf can be writeen %Le\n", dip, dip);
    return 0;
}