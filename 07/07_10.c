#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第201页
 * 目的： break语句
 */

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1){
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the lenght of the rectangle:\n");
    }
    printf("Done!\n");
    
    return 0;
}