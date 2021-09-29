#include <stdio.h>
#define SIZE 4
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第288页
 * 目的： 指针和数组
 */

int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;
    ptf = bills;

    printf("%28s %15s\n", "short", "double");
    for(index = 0; index < SIZE; index++)
        printf("pointers + %d: %14p %15p\n", index, pti+index, ptf+index);
    return 0;
}

/*
 * 经验总结
 *   指针+1后，是下一个存储单元的地址，而不是下一个字节的地址
 */