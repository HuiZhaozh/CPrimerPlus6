#include <stdio.h>
#include <math.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第144页
 * 目的： 浮点数的比较
 */

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001){
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("close enough!\n");
    return 0;
}