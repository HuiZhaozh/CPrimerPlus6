#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第142页
 * 目的： 测试条件后的简单语句或复合语句才是循环部分2
 */

int main(void)
{
    int n = 0;

    //注意分号放的位置
    while (n++ < 3);
        printf("n is %d\n", n);             //此行不属于while语句
    printf("That's all this program does\n");
    
    return 0;
}