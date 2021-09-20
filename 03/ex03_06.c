#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第069页
 * 目的： 
 * The mass of a single molecule of water is about 3.0x10^-23 grams. A quart of water is
 * about 950 grams. Write a program that requests an amount of water, in quarts, and
 * displays the number of water molecules in that amount.
 */

int main(void)
{
    double amount_quarts, amount_grams, amount_molecules;

    printf("Please enter an amount of water in quarts:\n");
    scanf("%lf", &amount_quarts);
    amount_grams = 950 * amount_quarts;
    amount_molecules = amount_grams / 3.0e-23;
    printf("The number of water molecules in %lf quarts is %le molecules.\n",
            amount_quarts, amount_molecules);
    return 0;
}

