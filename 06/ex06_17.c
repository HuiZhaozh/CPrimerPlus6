#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第176页
 * 目的： 
 *      Chuckie Lucky won a million dollars (after taxes), which he places in
 *      an account that earns 8% a year. On the last day of each year, Chuckie
 *      withdraws $100,000. Write a program that finds out how many years it
 *      takes for Chuckie to empty his account.
 */

int main(void)
{
    double money = 1000000;
    const double WITHDRAW = 100000;
    const double RATE = 0.08;
    int years = 0;
    
    while (money > 0){
        money += money * RATE;
        money -= WITHDRAW;
        years++;
    }
    printf("It takes %d years for Chuckie to empty his account.\n", years);
    return 0;
}

