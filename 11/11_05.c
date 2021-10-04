#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第328页
 * 目的： 用字符串常量初始化char *，该指针变量【指向】了静态存储区中的字符串
 */

int main(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s, &mesg = %p, value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s, &copy = %p, value = %p\n", copy, &copy, copy);
    return 0;
}