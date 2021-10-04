#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
/*
 * 作者： Andy
 * 日期： 2021-10-03
 * 页码： 第353页
 * 目的： strcpy函数
 */

int main(void)
{
    const char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy+7, orig);
    puts(copy);
    puts(ps);
    return 0;
}

/*
 * 经验总结
 *   (1) strcpy()返回值为char *，是第一个参数的地址
 *   (2) 程序员负责第一个参数指向的地址(一般是数组)有足够多的空间容纳第二个参数指向的源字符串中的内容
*/