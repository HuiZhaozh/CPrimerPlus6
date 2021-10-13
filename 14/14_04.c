#include <stdio.h>
#define LEN 20
/*
 * 作者： Andy
 * 日期： 2021-10-13
 * 页码： 第449页
 * 目的： 指向结构的指针
 */

struct name {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct name handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {
            {"Ewen","Villard"},
            "frilled salmon",
            "personality coach",
            68112.00
        },
        {
            {"Rodney","Swillbelly"},
            "tripe",
            "tabloid editor",
            432400.00
        }
    };
    struct guy * him;
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];
    printf("pointer #1: %p #2: %p\n", him, him + 1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n",
            him->income, (*him).income);
    him++;
    printf("him->favfood is %s: him->handle.last is %s\n",
            him->favfood, him->handle.last);

    return 0;
}