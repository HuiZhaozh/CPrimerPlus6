#include <stdio.h>
#define PAGES 336
#define WORDS 65618
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第087页
 * 目的： 一些不匹配的整形转换
 */

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
    return 0;
}

/*
 * 经验总结
 *   -336解释为有符号short类型，不阐述
 *   -336解释为有符号short类型，思考过程如下：
 *       (1) short类型 0-32767 公用的, 32768对应最小负数-32768，... 65535对应最大负数-1
 *       (2) 依次类推 65536 -1 = 65535， 65536 -2 = 65524，... 65536 -336 = 65200
 */