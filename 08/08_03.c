#include <stdio.h>
#include <stdlib.h>
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第225页
 * 目的： 程序使用fopen直接打开文件
 */

int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if(fp == NULL){
        printf("Failed to open file. Bye\n");
        exit (1);
    }
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}

