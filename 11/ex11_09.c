#include <stdio.h>
#include <string.h>
#define MAX 20
/*
 * 作者： Andy
 * 日期： 2021-10-06
 * 页码： 第372页
 * 目的： Write a function that replaces the contents of a string with the string reversed.
 *       Test the function in a complete program that uses a loop to provide input values
 *       for feeding to the function.
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);

void reverse(char * s);

int main(void)
{
    char s[MAX];

    printf("Enter a string: ");
    while (s_gets(s, MAX) != NULL){
        reverse(s);
        printf("Reverse string: %s\n", s);
        printf("Enter next string: ");
    }
    printf("Bye!\n");

    return 0;
}

void reverse(char * s){
    char * begin = s;
    char * end = s + strlen(s) - 1;
    char temp;

    while(begin < end){
        temp = *begin;
        *begin = *end;
        *end = temp;
        ++begin;
        --end;
    } 
}

