#include <stdio.h>
#define LEN 10
/*
 * 作者： Andy
 * 日期： 2021-10-05
 * 页码： 第371页
 * 目的： Design and test a function that fetches the next n characters from input (including
 *       blanks, tabs, and newlines), storing the results in an array whose address is passed
 *       as an argument.
 */
char * getnchar(char * str, int n);

int main(void)
{
    char input[LEN];
    char * check;

    check = getnchar(input, LEN - 1);
    if(check == NULL)
        puts("Input failed.");
    else
        puts(input);
    puts("Done.");
    return 0;
}

char * getnchar(char * str, int n){
    int i;
    int ch;
    for ( i = 0; i < n; i++){
        ch = getchar();
        if(ch != EOF)
            str[i] = ch;
        else
            break;
    }
    if(ch == EOF)
        return NULL;
    else{
        str[i] = '\0';
        return str;
    }
}