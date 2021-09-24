#include <stdio.h>
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define BREAK1 360.0        // 费率的第1个分界点
#define BREAK2 468.0        // 费率的第2个分界点
#define BREAK3 720.0        // 费率的第3个分界点
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + (BREAK2-BREAK1) * RATE2)
#define BASE3 (BASE2 + (BREAK3-BREAK2) * RATE3)
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第184页
 * 目的： 多重else if
 */

int main(void)
{
    double kwh;
    double bill;

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh);
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
        bill = BASE1 + RATE2*(kwh - BREAK1);
    else if (kwh <= BREAK3)
        bill = BASE2 + RATE3*(kwh - BREAK2);
    else
        bill = BASE3 + RATE4*(kwh - BREAK3);
    printf("The charge for %.1f is %1.2f.\n", kwh, bill);
    return 0;
}