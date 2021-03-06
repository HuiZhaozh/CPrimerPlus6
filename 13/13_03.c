#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
/*
 * 作者： Andy
 * 日期： 2021-10-09
 * 页码： 第421页
 * 目的： fprintf() fscanf() rewind()
 */

int main(void)
{
    FILE * fp;
    char words[MAX];

    if((fp = fopen("wordy", "a+")) == NULL){
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the filel press the #");
    puts("key at the begingning of a line to terminate.");
    while (fscanf(stdin, "%40s", words)==1 && words[0]!='#')
        fprintf(fp, "%s\n", words);
    puts("File contents: ");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done.");
    if(fclose(fp)!= 0)
        fprintf(stderr, "Error in closing files\n");
    
    
    return 0;
}