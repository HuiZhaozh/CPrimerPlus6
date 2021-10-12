#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SLEN 20
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Write a file copy program that prompts the user to enter the name of a text file to act as
 *       the source file and the name of an output file. The program should use the toupper() function
 *       from ctype.h to convert all text to uppercase as it's written to the output file. Use standard
 *       I/O and the text mode.
 */

int main(void)
{
    char source_file[SLEN];
    char target_file[SLEN];
    FILE * source;
    FILE * target;
    int ch;

    printf("PLease enter the name of a text to act as the source file: ");
    scanf("%s", source_file);
    printf("PLease enter the name of a text to act as the target file: ");
    scanf("%s", target_file);
    if((source = fopen(source_file, "r")) == NULL){
        printf("Could not open file %s for input.\n", source_file);
        exit(EXIT_FAILURE);
    }
    if((target = fopen(target_file, "w")) == NULL){
        printf("Could not open file %s for output.\n", target_file);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source)) != EOF){
        if(islower(ch))
            ch = toupper(ch);
        putc(ch, target);
    }

    if(fclose(source) != 0)
        printf("Could not close file %s\n", source_file);
    if(fclose(target) != 0)
        printf("Could not close file %s\n", target_file);
    
    return 0;
}

