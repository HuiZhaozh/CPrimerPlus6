#include <stdio.h>
#include <stdlib.h>
/*
 * 作者： Andy
 * 日期： 2021-10-09
 * 页码： 第415页
 * 目的： 标准文件IO
 */

int main(int argc, char * argv[])
{
    int ch;
    FILE * fp;
    unsigned long count = 0;

    if(argc != 2){
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp = fopen(argv[1], "r")) == NULL){
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF){
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters.\n", argv[1], count);

    return 0;
}


/*
 * 经验总结 --- 打开模式的总结
 *     模式      可做操作      文档不存在      是否覆盖
 *     "r"       只读         报错           -
 *     "r+"      读写         报错           是
 *     "w"       只写         新建           是
 *     "w+"      读写         新建           是
 *     "a"       只写         新建           否
 *     "a+"      读写         新建           否
 */

