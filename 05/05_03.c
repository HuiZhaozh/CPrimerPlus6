#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第107页
 * 目的： 赋值运算符
 */

int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    // 下面的两行代码对书中代码进行了打印格式方面的优化，并不影响读者书中内容的把握
    printf("                 cheeta   tarzan     jane\n");
    printf("First round score %5d %8d %8d\n", cheeta, tarzan, jane);
    return 0;
}