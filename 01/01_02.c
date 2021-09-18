#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-18
 * 页码： 第010页
 * 目的： C代码编程机制
*/

int main(void)
{
    printf("Concrete contains gravel and cement.\n");
    haha();
    return 0;
}

/*
 * 经验总结
 *   (1) gcc -c filename.c可以生成filename.o的目标文件
 *   (2) Mac OS X 10.13.6的Visual Studio Code 1.60.1下
 *       使用gcc filename1.c filename2.c编译多源文件C程序依然不会保留.o目标文件
*/