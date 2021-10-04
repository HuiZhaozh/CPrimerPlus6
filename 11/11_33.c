#include <stdio.h>
#include <stdlib.h>
#define LIM 30

/*
 * 作者： Andy
 * 日期： 2021-10-04
 * 页码： 第366页
 * 目的： strtol函数
*       本.c文件需要和11_10.c联合编译
 */

char * s_gets(char * st, int n);

int main(void)
{
    char number[LIM];
    char *end;
    long value;

    puts("Enter a number (empty line to quit):");
    while (s_gets(number, LIM) && number[0]!='\0'){
        value = strtol(number, &end, 10);
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
                value, end, *end);
        value = strtol(number, &end, 16);
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",
                value, end, *end);
    }
    puts("Bye!");
    return 0;
}

/*
 * 经验总结
 *   long strtol(const char *str, char **endptr, int base)
 *   
 */

