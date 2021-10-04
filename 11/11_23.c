#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
/*
 * 作者： Andy
 * 日期： 2021-10-02
 * 页码： 第349页
 * 目的： strcmp函数
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    while (ct<LIM && s_gets(input[ct], SIZE)!=NULL && strcmp(input[ct], STOP)!=0)
        ct++;
    printf("%d strings entered\n", ct);
    
    return 0;
}