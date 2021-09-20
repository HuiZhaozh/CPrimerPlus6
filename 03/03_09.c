#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第064页
 * 目的： printf参数错误的情况演示
 */

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    
    printf("%d\n", n, m);           //参数过多
    printf("%d %d %d\n", n);        //参数过少
    printf("%d %d\n", f, g);        //参数类型不匹配
    return 0;
}