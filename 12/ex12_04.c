#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第410页
 * 目的： Write and test in a loop a function that returns the number of times it has been called.
 */

int function(void);

int main(void)
{
    int times = 0;

    scanf("%d", &times);
    for (int i = 0; i < times; i++)
        printf("The function has been called for %d times.\n", function());
    
    return 0;
}
int function(void){
    static int times = 0;
    ++times;
    return times;
}
