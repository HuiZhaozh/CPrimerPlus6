#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第390页
 * 目的： 自定义随机数函数（需和12_07.c一起编译）
 */
extern unsigned int rand0(void);
// 实际上函数都是外部链接的，除非是使用static指定为内部链接
// extern关键字只是为了说明该函数是引用式声明，也不是必须的
// 去掉extern关键字该行就是给出了函数原型的意思
int main(void)
{
    int count;

    for ( count = 0; count < 5; count++)
        printf("%d\n", rand0());
    
    return 0;
}