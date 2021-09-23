#include <stdio.h>
#define MAXSIXE 255
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第176页
 * 目的： 
 *      Write a program that reads in a line of input and then prints the line in
 *      reverse order. You can store the input in an array of char; assume that
 *      the line is no longer than 255 characters. Recall that you can use scanf()
 *      with the %c specifier to read a character at a time from input and that
 *      the newline character (\n) is generated when you press the Enter key.
 */

int main(void)
{
    char line[MAXSIXE];
    int i = 0;

    printf("Please enter a line of input:\n");
    do
    {
        scanf("%c", &line[i]);
        i++;
    } while (i<=MAXSIXE && line[i-1]!='\n');
    
    while (i >= 2){
        printf("%c", line[i-2]);
        --i;
    }
    printf("\n");
    printf("See you next time!\n");
    return 0;
}

