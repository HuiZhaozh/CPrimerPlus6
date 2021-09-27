#include <stdio.h>
#include <ctype.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Write a program that reads characters from the standard input to end-of-file.
 *       For each character, have the program report whether it is a letter. If it is a
 *       letter, also report its numerical location in the alphabet. For eaxmple, c and
 *       C would both be letter 3. Incorporate a function that takes a character as an
 *       argument and returns the numerical location if the character is a letter
 *       and returns -1 otherwise.
 */
int report(char ch);

int main(void)
{
    char ch;

    printf("Please enter your characters: ");
    while ((ch = getchar()) != EOF){
        if(report(ch) == -1 && ch != '\n')
            printf("%c isn't a letter.\n", ch);
        else if(report(ch) == -1 && ch == '\n')
            printf("Please enter your characters: ");
        else
            printf("%c is a letter, its numeric location in the alphabet"
                   " is %d\n", ch, report(ch));
    }
    

    return 0;
}

int report(char ch){
    if(isalpha(ch)){
        return (tolower(ch) - 'a');
    }else
        return -1;
}

