#include <stdio.h>
#define MSG "I'm special"
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第324页
 * 目的： 用字符串初始化字符串数组和char *的不同
 */

int main(void)
{
    char ar[] = MSG;
    char * pt = MSG;

    printf("address of \"I'm special\": %p\n", "I'm special");
    printf("                address ar: %p\n", ar);
    printf("             address of pt: %p\n", pt);
    printf("            address of MSG: %p\n", MSG);
    printf("address of \"I'm special\": %p\n", "I'm special");

    return 0;
}

/*
 * 经验总结
 *   (1) 初始化数组 -- 将静态存储区中的字符串所有字符【拷贝】到动态存储区的数组中
 *       初始化指针 -- 将静态存储区中的字符串的地址拷贝给指针变量（指针【指向】了静态存储区中的字符串）
 *   (2) 用字符串初始化char *指针时，建议在最前面添加上const --  C关于用指针修改字符串的结果是未定义的
 *       换言之，如果打算修改字符串，就不要用指针指向字符串；用数组才可以
*/