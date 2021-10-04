#include <stdio.h>
#include <stdlib.h>
/*
 * 作者： Andy
 * 日期： 2021-10-04
 * 页码： 第366页
 * 目的： 把字符串转换成数字
 */

int main(int argc, char * argv[])
{
    int i, times;

    if(argc<2 || (times=atoi(argv[1]))<1)
        printf("Usages: %s positive-number\n", argv[0]);
    else
        for ( i = 0; i < times; i++)
            puts("Hello, good looking!");
    return 0;
}

/*
 * 经验总结
 *   int atoi(const char *)接受一个字符串，并将字符串转换为整数，
 *   而且并不仅限用于对命令行参数中的字符串进行转换
 */
