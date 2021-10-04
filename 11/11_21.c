#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
/*
 * 作者： Andy
 * 日期： 2021-10-02
 * 页码： 第347页
 * 目的： strcmp函数
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0){
        puts("No, that's wrong, Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}
