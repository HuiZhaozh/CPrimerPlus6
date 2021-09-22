#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第108页
 * 目的： 乘法运算符*
 */

int main(void)
{
    int num = 1;

    while (num < 21){
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }
    

    return 0;
}