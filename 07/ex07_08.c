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
 * 页码： 第215页
 * 目的： Modify assumption a. in exercise 7 so that the program presents a menu of
 *       pay rates from which to choose. Use a switch to select the pay rate. The
 *       beginning of a run should look something like this:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                         2) $9.33/hr
3) $10.00/hr                        4) $11.20/hr
5) quit
*****************************************************************
 *       If choices 1 through 4 are selected, the program should request the hours
 *       worked. The program should recycle until 5 is entered. If something other
 *       than choices 1 through 5 is entered, the program should remind the user
 *       what the proper choices are and then recycle. Use #defined constants
 *       for the various earning rates and tax rates.
 */

int main(void)
{
    double hours;
    double gross_pay, tax, net_pay;
    char choice;
    double basic_pay_rate;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                         2) $9.33/hr\n");
    printf("3) $10.00/hr                        4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");

    pay_rate:
    while ((choice = getchar()) == '\n')
        continue;                           //跳过前导Enter
    while (getchar() != '\n')
        continue;
    switch (choice)
    {
    case '1':
        basic_pay_rate = 8.75;
        break;
    case '2':
        basic_pay_rate = 9.33;
        break;
    case '3':
        basic_pay_rate = 10.00;
        break;
    case '4':
        basic_pay_rate = 11.20;
        break;
    case '5':
        printf("See you next time!\n");
        return 0;
    default:
        printf("Please enter 1~5 to choose a pay rate or action:\n");
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

