#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第381页
 * 目的： 用static修饰的局部变量(块作用域、无链接、静态存储)
 */

void trystat(void);

int main(void)
{
    int count;

    for ( count = 1; count <= 3; count++){
        printf("Here comes iteration: %d:\n", count);
        trystat();
    }
    
    return 0;
}

void trystat(void){
    int fade = 1;
    static int stay = 1;

    printf("fade = %d and stay = %d\n", fade++, stay++);
}