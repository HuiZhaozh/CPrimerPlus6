#include <stdio.h>
#include <string.h>
#define SIZE 40
/*
 * 作者： Andy
 * 日期： 2021-10-02
 * 页码： 第344页
 * 目的： strcat函数
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favourite flower?");
    if(s_gets(flower, SIZE)){
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }else
        puts("End of file encountered!");
    puts("Bye!");
    return 0;
}