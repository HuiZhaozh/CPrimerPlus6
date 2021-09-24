#include <stdio.h>
#define PERIOD '.'
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第190页
 * 目的： 逻辑运算符
 */

int main(void)
{
    char ch;
    int char_count = 0;

    while ((ch = getchar()) != PERIOD){
        if (ch!='"' && ch!='\'')
            char_count++;
    }
    printf("There are %d non-quote characters.\n", char_count);
    
    return 0;
}