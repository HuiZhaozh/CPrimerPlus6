#include <stdio.h>
#define LEN 20
/*
 * 作者： Andy
 * 日期： 2021-10-13
 * 页码： 第448页
 * 目的： 嵌套结构
 */
const char * msgs[5] = {
    "    Thank you for the wonderful evening. ",
    "You certainly prove that a ",
    "is a special kind of guy, We must get together",
    "over a delicious ",
    " and have a few laughs"
};

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
    struct guy fellow = {
        {
            "Ewen",
            "Villard"
        },
        "frilled salmon",
        "personality coach",
        68112.00
    };

    printf("Dear %s, \n\n", fellow.handle.first);
    printf("%s%s.\n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
    if(fellow.income > 150000.0)
        puts("!!");
    else if(fellow.income > 75000.0)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "See you sonn,");
    printf("%40s%s\n", " ", "Shalala");

    return 0;
}
