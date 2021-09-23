#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第176页
 * 目的： 
 *      Daphne invests $100 at 10% simple interest. (That is, every year, the
 *      investment earns an interest equal to 10% of the original investment.)
 *      Deridre invests $100 at 5% interest compounded annually. (That is, interest
 *      is 5% of the current balance, including previous addition of interest.)
 *      Write a program that finds how many years it takes for the value of Deirdre's
 *      investment to exceed the value of Daphne's investment. Also show the two
 *      values at that time.
 */

int main(void)
{
    const double rate_Daphne = 0.1;
    const double rate_Deridre = 0.05;
    const double original_invest = 100.0;
    double value_Daphne = original_invest;
    double value_Deridre = original_invest;
    int years;

    while (value_Daphne >= value_Deridre){
        years++;
        value_Daphne += original_invest * rate_Daphne;
        value_Deridre *= (1.0 + rate_Deridre); 
    }
    printf("It takes %d years for the value of Deridre's investment to exceed\n"
           "the value of Daphne's investment.\n", years);
    printf("At that time, the value of Daphne's investment is %f,\nand the value "
           "of Deridre's investment is %f.\n", value_Daphne, value_Deridre);
    return 0;
}

