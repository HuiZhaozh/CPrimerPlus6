#include <stdio.h>
#define FUNDLEN 50
/*
 * 作者： Andy
 * 日期： 2021-10-13
 * 页码： 第453页
 * 目的： 传递结构
 */
struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah);

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };
    
    printf("Stan has a total of $%.2f.\n", sum(stan));
    return 0;
}

double sum(struct funds moolah){
    return (moolah.bankfund + moolah.savefund);
}