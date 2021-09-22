#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第127页
 * 目的： 带有参数的函数
 */
void pound(int n);              //ANSI 函数原型申明
int main(void)
{
    int times  = 5;
    char ch = '!';
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound(f);
    return 0;
}

void pound(int n){
    while (n-- > 0){
        printf("#");
    }
    printf("\n");
    
}