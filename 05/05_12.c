#include <stdio.h>
#define MAX 100
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第118页
 * 目的： 递减运算符
 */

int main(void)
{
    int count = MAX + 1;

    while (--count > 0){
        printf("%d bottles of spring water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of sprintg water!\n\n", count - 1);
    }
    
    return 0;
}