#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第341页
 * 目的： 驱动程序 --- 测试11_14.c和11_15.c
 */
void put1(const char * string);
int put2(const char * string);
int main(void)
{
    put1("If i'd as much money");
    put1(" as I could spend,\n");
    printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));
    return 0;
}