#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第341页
 * 目的： 使用putchar实现的带有统计待打印字符的个数功能的puts函数
 */

int put2(const char * string){
    int count = 0;
    while (*string != '\0'){
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}