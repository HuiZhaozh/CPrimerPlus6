#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第142页
 * 目的： 测试条件后的简单语句或复合语句才是循环部分
 */

int main(void)
{
    int n = 0;

    //糟糕的代码创建了一个死循环
    while (n < 3)
        printf("n is %d\n", n);
        n++;
    printf("That's all this program does\n");
    
    return 0;
}