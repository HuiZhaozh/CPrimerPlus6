#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-03
 * 页码： 第364页
 * 目的： 命令行参数
 */

int main(int argc, char * argv[])
{
    int count;

    printf("The command line has %d arguments:\n", argc);
    for (count = 0; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");
    return 0;
}