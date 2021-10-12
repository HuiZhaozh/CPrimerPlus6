#include <stdio.h>
#include <stdlib.h>
#define MAX 81
/*
 * 作者： Andy
 * 日期： 2021-10-12
 * 页码： 第437页
 * 目的： Write a program that opens a text file whose name is obtained interactively. Set up a
 *       loop that asks the user to enter a file position. The program then should print the part of
 *       the file starting at that position and proceed to the next newline character. Let negative
 *       or nonnumeric input terminate the user-input loop.
 */

int main(void)
{
    FILE * fp;
    char file_name[MAX];
    long position;
    int ch;

    puts("Enter the name of the file to be processed:");
    scanf("%s", file_name);
    if((fp = fopen(file_name, "r")) == NULL){
        printf("Can't open %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    printf("Please enter a file position (negative or nonumeric input to quit): ");
    while (scanf("%ld", &position) && position>=0){
        fseek(fp, position, SEEK_SET);
        ch = getc(fp);
        while (ch!=EOF && ch!='\n'){
            putc(ch, stdout);
            ch = getc(fp);
        }
        putchar('\n');
        printf("Please enter another file position (negative or nonumeric input to quit): ");
    }
    printf("Done!\n");
    return 0;
}

