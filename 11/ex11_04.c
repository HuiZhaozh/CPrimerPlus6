#include <stdio.h>
#include <ctype.h>
#define LEN 80
#define MAX 10

/*
 * 作者： Andy
 * 日期： 2021-10-05
 * 页码： 第372页
 * 目的： Design and test a function like that described in Programming Exercise 3 except that it
 *       accepts a second parameter specifying the maximum number of characters that can be read.
 */
char * get_word(char * word, int n);

int main(void)
{
    char input[LEN];

    while (get_word(input, MAX) != NULL)
        puts(input);
    puts("Done.\n");
    
    return 0;
}

char * get_word(char * word, int n){
    int ch;
    char * orig = word;

    // 跳过前导空白符
    while ((ch=getchar()) != EOF && isspace(ch))
        continue;
    if(ch == EOF)
        return NULL;
    else
        *orig++ = ch;
    while ((ch=getchar()) != EOF && !isspace(ch) && --n)
        *orig++ = ch;
    if(ch == EOF)
        return NULL;
    else{
        *orig = '\0';
        while (ch != '\n')
            ch = getchar();
        return word;
    }   
}


