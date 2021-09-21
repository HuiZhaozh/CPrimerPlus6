#include <stdio.h>
#define PRAISE "You are an extraordinary being."
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第073页
 * 目的： 使用字符串
 */

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}