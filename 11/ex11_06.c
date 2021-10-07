#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 80
/*
 * 作者： Andy
 * 日期： 2021-10-05
 * 页码： 第372页
 * 目的： Write a function called is_within() that takes a character and a string pointer
 *       as its two function parameters. Have the function return a nonzero value (true)
 *       if the charater is in the string and zero (false) otherwise. Test the function
 *       in a complete program that uses a loop to provide input values for feeding to
 *       the function.
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);
bool is_within(const char * str, char c);

int main(void)
{
    char input[LEN];
    char ch;
    int found;

    printf("Enter a string: ");
    while (s_gets(input, LEN) && input[0]!='\0'){
        printf("Enter a character: ");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        found = is_within(input, ch);
        if (found == 0)
            printf("%c not found in string %s\n", ch, input);
        else
            printf("%c found in string %s\n", ch, input);
        printf("Next string: ");        
    }
    puts("Done.\n");
    return 0;
}

bool is_within(const char * str, char c){
    while (*str!='\0' && *str!=c)
        str++;
    return *str;
    
}
