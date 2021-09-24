#include <stdio.h>
#define STOP '#'
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第214页
 * 目的： Write a program that reads input until encountering the # character and
 *       then reports the number of spaces read, the number of newline characters
 *       read, and then number of all other characters read.
 */

int main(void)
{
    char ch;
    int n_space = 0;
    int n_line = 0;
    int n_other = 0;

    printf("Please enter your characters:\n");
    while ((ch = getchar()) != STOP){
        if(ch == ' ')
            n_space++;
        else if(ch == '\n')
            n_line++;
        else
            n_other++;
    }
    printf("The number of spaces read is %d.\n", n_space);
    printf("The number of newline read is %d.\n", n_line);
    printf("The number of all others read is %d.\n", n_other);

    return 0;
}

