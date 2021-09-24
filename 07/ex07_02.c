#include <stdio.h>
#define STOP '#'
#define PAIRS_PER_LINE 8
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： Write a program that reads input until encoutering #. Have the program
 *       print each input character and its ASCII decimal code. Print eight
 *       character-code pairs per line. Suggestion: Use a character count and the
 *       modulus operator (%) to print a newline character for every eight cycles
 *       of the loop.
 */

int main(void)
{
    char ch;
    int count = 0;

    printf("Please enter your characters :\n");
    while ( (ch = getchar())!= STOP){
        count++;
        printf("%c-%3d ", ch, ch);
        if (count % PAIRS_PER_LINE == 0)
            printf("\n");
    }
    
    return 0;
}
