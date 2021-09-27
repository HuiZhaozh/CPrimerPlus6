#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第254页
 * 目的： 使用ANSI C之前形式的函数声明带来问题
 */
int imax();
int main(void)
{
    printf("The maximum value of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum value of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}
int imax(n, m)
int n, m;
{
    return (n > m ? n: m);
}