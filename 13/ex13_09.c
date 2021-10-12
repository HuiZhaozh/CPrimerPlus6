#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 47
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Modify the program in Listing 13.3 so that each word is numbered according to the order
 *       in which it was added to the list, starting with 1. Make sure that, when the program is
 *       run a second time, new word numbering resumes where the previous numbering left off.
 */

int main(void)
{
    FILE * fp;
    char words[MAX];
    int word_cnt = 0;

    if((fp = fopen("wordy", "a+")) == NULL){
        fprintf(stderr, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    rewind(fp);
    while (fgets(words, MAX, fp) != NULL)
        word_cnt++;

    puts("Enter words to add to the filel press the #");
    puts("key at the begingning of a line to terminate.");
    while (fscanf(stdin, "%40s", words)==1 && words[0]!='#')
        fprintf(fp, "%3d: %s\n", ++word_cnt, words);
    puts("File contents: ");
    rewind(fp);
    while (fgets(words, MAX, fp) != NULL)
        fputs(words, stdout);
    puts("Done.");
    if(fclose(fp)!= 0)
        fprintf(stderr, "Error in closing files\n");
    
    return 0;
}

