#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第064页
 * 目的： 转义序列的演示
 */

int main(void)
{
    float salary;

    printf("\aEnter your desird monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is %.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");
    
    return 0;
}