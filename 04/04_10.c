#include <stdio.h>
#define BLURB "Authentic imitation!"
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第086页
 * 目的： 字符串格式的示例
 */

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    return 0;
}