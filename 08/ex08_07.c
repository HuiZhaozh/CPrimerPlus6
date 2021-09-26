#include <stdio.h>
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
 * 页码： 第242页
 * 目的： Modify Programming Exercise 8 from Chapter 7 so that the menu choices are
 *       labeled by characters instead of by numbers; use q instead of 5 as the
 *       cut to terminate input.
 */

int main(void)
{
    double hours;
    double gross_pay, tax, net_pay;
    char choice;
    double basic_pay_rate;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                         b) $9.33/hr\n");
    printf("c) $10.00/hr                        d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");

    pay_rate:
    while ((choice = getchar()) == '\n')
        continue;                           //跳过前导Enter
    while (getchar() != '\n')
        continue;
    switch (choice)
    {
    case 'a':
        basic_pay_rate = 8.75;
        break;
    case 'b':
        basic_pay_rate = 9.33;
        break;
    case 'c':
        basic_pay_rate = 10.00;
        break;
    case 'd':
        basic_pay_rate = 11.20;
        break;
    case 'q':
        printf("See you next time!\n");
        return 0;
    default:
        printf("Please enter a~d to choose a pay rate, or q to quit:\n");
        goto pay_rate;
    }
    
    printf("How many hours you work in a week?\n");
    scanf("%lf", &hours);
    if(hours > BASIC_TIME)
        hours = 40 + OVERTIME * (hours - BASIC_TIME);
    gross_pay = hours * basic_pay_rate;                 //工资总额

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

