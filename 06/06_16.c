#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第160页
 * 目的： 用while改写06_15.c源代码
 */

int main(void)
{
    const int secret_code = 13;
    int code_entered;

    printf("To enter the griskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code){
        printf("To enter the griskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured!\n");
    return 0;
}