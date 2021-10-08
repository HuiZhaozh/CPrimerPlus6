#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第384页
 * 目的： 文件作用域，外部链接、静态存储的变量
 */
void critic(void);
int units = 0;

int main(void)
{
    extern int units;

    printf("How many pounds to firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("You must have looked it up!\n");
    return 0;
}

void critic(void){
    printf("No luck, my friend, Try again.\n");
    scanf("%d", &units);
}