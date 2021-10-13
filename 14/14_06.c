#include <stdio.h>
#define FUNDLEN 50
/*
 * 作者： Andy
 * 日期： 2021-10-13
 * 页码： 第452页
 * 目的： 传递结构的地址
 */
struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };
    
    printf("Stan has a total of $%.2f.\n", sum(&stan));
    return 0;
}

double sum(const struct funds * money){
    return (money->bankfund + money->savefund);
}