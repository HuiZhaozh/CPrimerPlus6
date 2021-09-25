#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第226页
 * 目的： 猜数字V1版本
 */

int main(void)
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and whit");
    printf("\n an n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y'){
        printf("Well, then, is it %d?\n", ++guess);
    }
    printf("I knew I could do it!\n");
    
    return 0;
}