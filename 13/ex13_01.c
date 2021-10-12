#include <stdio.h>
#include <stdlib.h>
#define SLEN 20
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Modify Listing 13.1 so that it solicits the user to enter the filename and reads the user's
 *       response instead of using command-line arguments.
 */

int main(void)
{
    int ch;
    FILE * fp;
    unsigned long count = 0;
    char file[SLEN];
    
    printf("Please enter the filename: ");
    scanf("%s", file);

    if((fp = fopen(file, "r")) == NULL){
        printf("Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF){
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters.\n", file, count);

    return 0;
}
