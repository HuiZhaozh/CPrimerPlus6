#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第031页
 * 目的： 使用多个函数(自定义函数)
 */
void butler(void);          //函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable DVDs.\n");
    return 0;
}

void butler(void){          //函数定义
    printf("You rang, sir?\n");
}