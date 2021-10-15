#include <stdio.h>
#define PSQR(x) printf("The square of "#x" is %d.\n", ((x)*(x)));
/*
 * 作者： Andy
 * 日期： 2021-10-15
 * 页码： 第528页
 * 目的： #作用在宏参数上
 */ 

int main(void)
{
    int y = 5;

    PSQR(y);
    PSQR(2 + 4);
    return 0;
}