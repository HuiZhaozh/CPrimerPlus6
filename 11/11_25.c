#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
/*
 * 作者： Andy
 * 日期： 2021-10-03
 * 页码： 第351页
 * 目的： strcpy函数
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);

int main(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i<LIM && s_gets(temp, SIZE)){
        if(temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else{
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for ( i = 0; i < LIM; i++)
        puts(qwords[i]);
    
    return 0;
}