#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： write a program that opens two files. You can obtain the filenames either by using
 *       command-line arguments or by solicting the user to enter them.
         a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the
            first file, line 2 of the second file, and so on, until the last line of the longer file (in
            terms of lines) is printed.
 */

int main(void)
{
    FILE * f1, *f2;
    char first_file[LEN];
    char second_file[LEN];
    int ch1, ch2;

    printf("Please enter the first file name:");
    scanf("%s", first_file);
    printf("Please enter the second file name:");
    scanf("%s", second_file);

    // 打开文件
    if((f1 = fopen(first_file, "r")) == NULL){
        fprintf(stderr, "I couldn't open the file \"%s\"\n", first_file);
        exit(EXIT_FAILURE);
    }
    if((f2 = fopen(second_file, "r")) == NULL){
        fprintf(stderr, "I couldn't open the file \"%s\"\n", second_file);
        exit(EXIT_FAILURE);
    }

    ch1 = getc(f1);
    ch2 = getc(f2);
    while (ch1!=EOF || ch2!=EOF){
        while (ch1!=EOF && ch1!='\n'){
            putchar(ch1);
            ch1 = getc(f1);
        }
        if(ch1!=EOF){
            // 上面的循环因为ch1遇到\n退出
            putchar('\n');
            ch1 = getc(f1);
        }

        while (ch2!=EOF && ch2!='\n'){
            putchar(ch2);
            ch2 = getc(f2);
        }
        if(ch2 != EOF){
            putchar('\n');
            ch2 = getc(f2);
        } 
    }
    
    if(fclose(f1) != 0)
        printf("Could not close file %s\n", first_file);
    if(fclose(f2) != 0)
        printf("Could not close file %s\n", second_file);

    return 0;
}

