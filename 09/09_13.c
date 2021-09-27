#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第268页
 * 目的： 使用变量实现的交换值的函数(显然不会交换成功)
 */

void inter_change(int u, int v);

int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d\n", x, y);
    inter_change(x, y);
    printf("Now x = %d and y = %d\n", x, y);
    return 0;
}

void inter_change(int u, int v){
    int temp;
    
    temp = u;
    u = v;
    v = temp;
}