#include <stdio.h>
#include <string.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
 *     Write a program that reads a single word into a character array and then
 *     prints the word backward. Hint: Use strlen() (Chapter 4) to compute the
 *     index of the last character in the array.
 */

int main(void)
{
    char word[20];
    int index;

    printf("Please enter a single word:\n");
    scanf("%s", word);
    for(index = strlen(word) - 1; index >= 0; index--)
        printf("%c", word[index]);
    printf("\n");
    return 0;
}
