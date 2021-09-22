#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第115页
 * 目的： 递增运算符
 */

int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5){
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }
    
    return 0;
}