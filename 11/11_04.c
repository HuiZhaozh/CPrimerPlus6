#include <stdio.h>
#define SLEN 40
#define LIM 5
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第326页
 * 目的： 字符串数组
 */

int main(void)
{
    int i;
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };

    char yourTalents[LIM][SLEN] = {
        "Walking int a straight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"
    };

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for ( i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourTalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
            sizeof(mytalents), sizeof(yourTalents));
    return 0;
}