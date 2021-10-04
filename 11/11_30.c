#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
/*
 * 作者： Andy
 * 日期： 2021-10-03
 * 页码： 第362页
 * 目的： ctype.h字符函数
 */
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char *find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if(find)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));
    
    return 0;
}

void ToUpper(char * str){
    while (*str){
        *str = toupper(*str);
        str++;
    }
}
int PunctCount(const char * str){
    int ct = 0;
    while (*str){
        if(ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}