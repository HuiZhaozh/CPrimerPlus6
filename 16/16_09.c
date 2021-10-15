#include <stdio.h>
#define JUST_CHECKING
#define LIMIT 4
#undef JUST_CHECKING
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第535页
 * 目的： 条件编译
 */ 

int main(void)
{
    int i;
    int total = 0;

    for ( i = 1; i <= LIMIT; i++){
        total += 2*i*i + 1;
        #ifdef JUST_CHECKING
            printf("i = %d, running total = %d\n", i, total);
        #endif
    }
    printf("Grand total = %d\n", total);

    return 0;
}