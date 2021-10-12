#include <stdio.h>
#include <stdlib.h>
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Write a program that sequentially displays onscreen all the files listed in the command
 *       line. Use argc to control a loop.
 */

int main(int argc, char * argv[])
{
    FILE * source;
    int file;
    int ch;

    if(argc == 1){
        printf("Usage: %s filename_1 ... filename_n.\n", argv[0]);
    }
    
    for ( file = 1; file < argc; file++){
        if((source = fopen(argv[file], "r")) == NULL){
            printf("Could not open file %s for input.\n", argv[file]);
            continue;
        }

        // 开始读区文件
        while ((ch = getc(source)) != EOF)
            putchar(ch);
        // 关闭文件
        if(fclose(source) != 0)
        printf("Could not close file %s\n", argv[file]);
        
    }
    
    
    
    return 0;
}

