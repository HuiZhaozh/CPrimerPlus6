#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第322页
 * 目的： 双引号扩起来的字符串是指针
 */

int main(void)
{
    printf("%s, %p, %c\n", "We", "are", *"space farers");
    return 0;
}