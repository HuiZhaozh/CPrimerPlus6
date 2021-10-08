#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第379页
 * 目的： 没有花括号的块
 */

int main(void)
{
    int n = 8;

    printf("   Initially, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++)
        printf("   Loop1: n = %d at %p\n", n, &n);
    printf("After Loop1, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++){
        printf("   Loop 2: n = %d at %p\n", n, &n);
        int n = 6;
        printf("   Loop2: n = %d at %p\n", n, &n);
        n++;
    }
    printf("After Loop2, n = %d at %p\n", n, &n);

    return 0;
}