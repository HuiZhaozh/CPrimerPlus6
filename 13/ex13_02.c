#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 4096
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Write a file-copy program that takes the original filename and the copy file from the
 *       command line. Use standard I/O and the binary mode, if possible.
 */

int main(int argc, char * argv[])
{
    FILE * source;
    FILE * target;
    char arr[BUFSIZE];
    long bytes;

    if(argc != 3){
        printf("Usage: %s source_file, copy_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((source = fopen(argv[1], "rb")) == NULL){
        printf("Could not open file %s for input.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((target = fopen(argv[2], "wb")) == NULL){
        printf("Could not open file %s for output.\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while ((bytes = fread(arr, sizeof(char), BUFSIZE, source)) > 0){
        fwrite(arr, sizeof(char), bytes, target);
    }
    

    if(fclose(source) != 0)
        printf("Could not close file %s\n", argv[1]);
    if(fclose(target) != 0)
        printf("Could not close file %s\n", argv[2]);
    return 0;
}
