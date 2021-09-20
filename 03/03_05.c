#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第054页
 * 目的： 打印char数据
 */

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);
    return 0;
}