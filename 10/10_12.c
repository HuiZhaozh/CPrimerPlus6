#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第294页
 * 目的： 
 *     *p1++   *(p1++)   <==>    p1先递增，但引用先前的值(括号不是序列点)
 *     *++p1             <==>    p1先递增，引用后面的值
 *     (*p1)++           <==>    引用p1的值，然后自增该位置上的值(指针位置不变)
 */
int data[2] = {100, 200};
int more_data[2] = {300, 400};

int main(void)
{
    int *p1, *p2, *p3;

    p1 = p2 = data;
    p3 = more_data;
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    return 0;
}