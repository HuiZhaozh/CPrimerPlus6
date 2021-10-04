#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第340页
 * 目的： 使用putchar实现的不自动添加换行符的puts函数
 */

void put1(const char * string){
    while (*string != '\0')
        putchar(*string++);
}