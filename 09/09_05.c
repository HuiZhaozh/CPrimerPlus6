#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第255页
 * 目的： 使用ANSI C形式的函数声明
 */
int imax(int, int);
int main(void)
{
    // 下一行编译器报错 —— too few arguments in function call
    printf("The maximum value of %d and %d is %d.\n", 3, 5, imax(3));
    // 下一行编译器回完成类型转换以符合函数原型的要求(大多数编译器回给出警告信息)
    printf("The maximum value of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}
int imax(int n, int m){
    return (n > m ? n: m);
}