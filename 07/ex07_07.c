#include <stdio.h>
#define BASIC_PAY_RATE 10
#define BASIC_TIME 40
#define OVERTIME 1.5
#define TAX_LIMIT1 300
#define TAX_LIMIT2 450
#define TAX_LIMIT1_RATE 0.15
#define TAX_LIMIT2_RATE 0.20
#define TAX_LIMIT3_RATE 0.25
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： Write a program that requests the hours worked in a week and then prints
 *       the gross pay, the taxes, and the net pay. Assume the following:
 *       a. Basic pay rate = $10.00/hr
 *       b. Overtime (in excess of 40 hours) = time and a half
 *       c. Tax rate: #15% of the first $300
 *                     20% of the next $150
 *                     25% of the rest
 *       Use #define constants, and don't worry if the example does not conform
 *       to current tax law.
 */

int main(void)
{
    double hours;
    double gross_pay, tax, net_pay;

    printf("How many hours you work in a week?\n");
    scanf("%lf", &hours);
    if(hours > BASIC_TIME)
        hours = 40 + OVERTIME * (hours - BASIC_TIME);
    gross_pay = hours * BASIC_PAY_RATE;                 //工资总额

    if(gross_pay < TAX_LIMIT1)
        tax = TAX_LIMIT1_RATE * gross_pay;
    else if(gross_pay < TAX_LIMIT2)
        tax = TAX_LIMIT1 * TAX_LIMIT1_RATE + TAX_LIMIT2_RATE * (gross_pay - TAX_LIMIT1);
    else
        tax = TAX_LIMIT1 * TAX_LIMIT1_RATE + (TAX_LIMIT2 - TAX_LIMIT1) * TAX_LIMIT2_RATE + (gross_pay - TAX_LIMIT2) * TAX_LIMIT3_RATE;
    net_pay = gross_pay - tax;
    printf("Your gross pay is $%g, your tax is $%g, your net pay is $%g.\n",
            gross_pay, tax, net_pay);
    return 0;
}

