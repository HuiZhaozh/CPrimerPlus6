#include <stdio.h>
#include <ctype.h>
#define LEN 80
/*
 * 作者： Andy
 * 日期： 2021-10-05
 * 页码： 第371页
 * 目的： Design and test a function that reads the first word from a line of input into an array and
 *       discards the rest of the line. It should skip over leading whitespace. Define a word as a
 *       sequence of characters with no blanks, tabs, or newlines in it. Use getchar()
 */
char * get_word(char * word);

int main(void)
{
    char input[LEN];

    while (get_word(input) != NULL)
        puts(input);
    puts("Done.\n");
    
    return 0;
}

char * get_word(char * word){
    int ch;
    char * orig = word;

    // 跳过前导空白符
    while ((ch=getchar()) != EOF && isspace(ch))
        continue;
    if(ch == EOF)
        return NULL;
    else
        *orig++ = ch;
    while ((ch=getchar()) != EOF && !isspace(ch))
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
