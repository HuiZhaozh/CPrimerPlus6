#include <stdio.h>
#include "16_06.h"
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第533页
 * 目的： #include 文件包含
 */ 

int main(void)
{
    names candidats;
    
    printf("%d\n", SLEN);
    get_names(&candidats);
    printf("Let's welcome ");
    show_names(&candidats);
    printf(" to this program!\n");
    
    return 0;
}