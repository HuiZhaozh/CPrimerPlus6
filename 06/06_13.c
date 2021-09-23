#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第156页
 * 目的： 逗号运算符
 */

int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;

    int ounces, cost;
    printf("ounces cost\n");
    for ( ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ){
        printf("%6d $%4.2f\n", ounces, cost / 100.0);
    }
    
    return 0;
}