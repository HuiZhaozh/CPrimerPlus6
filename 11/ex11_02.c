#include <stdio.h>
#include <ctype.h>
#define LEN 10
/*
 * 作者： Andy
 * 日期： 2021-10-05
 * 页码： 第371页
 * 目的： Modify and test the function in exercise 1 so that it stops after n characters or after the
 *       first blank, tab, or newline, whichever comes first. (Don’t just use scanf() .
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
        if(ch != EOF && !isspace(ch))
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