#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第250页
 * 目的： 使用return从函数中返回值
 */
int imin(int value1, int value2);

int main(void)
{
    int evil1, evil2;

    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2){
        printf("The lesser of %d and %d is %d.\n", 
                evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");
    
    return 0;
}

int imin(int value1, int value2){
    int min;
    if(value1 < value2)
        min = value1;
    else
        min = value2;
    return min;
}