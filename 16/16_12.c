#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第539页
 * 目的： 预定义标识符和预定义宏
 */ 

void why_me(void);

int main(void)
{
    printf("The file is %s.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time si %s.\n", __TIME__);
    printf("The version is %ld.\n", __STDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    printf("This function is %s\n", __func__);

    return 0;
}