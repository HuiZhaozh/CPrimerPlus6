#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第144页
 * 目的： C语言的真和假
 */

int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d\n", true_val, false_val);
    return 0;
}