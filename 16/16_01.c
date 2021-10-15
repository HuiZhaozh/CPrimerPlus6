#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. -Oscar Wilde"
#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第522页
 * 目的： #define
 */

int main(void)
{
    int x = TWO;

    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("Two: OW\n");
    return 0;
}
