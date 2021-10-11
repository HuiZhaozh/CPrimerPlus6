#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'
#define SLEN 81
/*
 * 作者： Andy
 * 日期： 2021-10-09
 * 页码： 第423页
 * 目的： fseek() ftell()
 */

int main(void)
{
    char file[SLEN];
    char ch;
    FILE * fp;
    long count, last;

    puts("Enter the name of file to be processed:");
    scanf("%80s", file);
    if((fp = fopen(file, "rb")) == NULL){
        printf("reverse can't open %s \n", file);
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_END);            // 定位到文件末尾
    last = ftell(fp);
    for ( count = 1; count <= last; count++){
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        if(ch != CNTL_Z && ch!='\r')
        putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}

