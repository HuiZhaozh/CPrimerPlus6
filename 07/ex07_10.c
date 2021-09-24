#include <stdio.h>
#include <ctype.h>
#define RATE1 0.15
#define RATE2 0.28
#define SINGLE 17850
#define HEAD_OF_HOUSE 23900
#define MARRIED_JOINT 29750
#define MARRIED_SEP 14875
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： The 1998 United States Federal Tax Schedule was the simplest in recent
 *       times. It had four categories, and each category had two rates. Here is
 *       a summary (dollar amounts are taxable income):
 *       Category                           Tax
 *       Single                             15% of first $17,850 plus 28% of excess
 *       Head of Household                  15% of first $23,900 plus 28% of excess
 *       Married, Joint                     15% of first $29,750 plus 28% of excess
 *       Married, Separate                  15% of first $14,875 plus 28% of excess
 *       For example, a single wage earner with a taxable income of $20,000 owes
 *       0.15 x $17,850 + 0.28 x ($20,000-$17,850). Write a program that lets the
 *       user specify the tax category and the taxable income and that then calculates
 *       the tax. Use a loop so that the user can enter several tax cases.
 */

int main(void)
{
    char choice;
    int rate_tier;
    double income, tax;
    

    do{
        situation_choice:
        printf("You are (enter 1~4 to choose your situation):\n");
        printf("1. Single\n");
        printf("2. Head of Household\n");
        printf("3. Married, Joint\n");
        printf("4. Married, Separate\n");
        choice = getchar();
        while (getchar() != '\n')
            ;
        if(choice < '1' || choice > '4')
            goto situation_choice;
        // 进行到这一步，说明身份类别确定了
        switch (choice)
        {
        case '1':
            rate_tier = SINGLE;
            break;
        case '2':
            rate_tier = HEAD_OF_HOUSE;
            break;
        case '3':
            rate_tier = MARRIED_JOINT;
            break;
        case '4':
            rate_tier = MARRIED_SEP;
        }
        printf("Please enter your income:\n");
        while (scanf("%lf", &income) != 1){
            printf("Please enter a number:\n");
            while (getchar() != '\n')
                ;
        }
        while (getchar() != '\n')
            ;
        if(income < rate_tier)
            tax = income * RATE1;
        else
            tax = rate_tier * RATE1 + (income -rate_tier) * RATE2;
        printf("The tax you need to pay is $%g.\n", tax);
        printf("Another turn? (Enter 'y' to continue, enter other"
               " characters to exit):\n");
        choice = getchar();
        while (getchar() != '\n')
            ;
    } while (choice == 'y');
    
    return 0;
}



