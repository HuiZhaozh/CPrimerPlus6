#include <stdio.h>
#define STOP '#'
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： Using if else statements, write a program that reads input up to #,
 *       replaces each period with an exclamation mark, replaces each exclamation
 *       mark initially present with two exclamation marks, and reports at the
 *       end the number of substitutions it has made.
 */

int main(void)
{
    char ch;
    int count = 0;

    printf("Please enter your characters:\n");
    while ( (ch = getchar())!= STOP){
        if(ch == '.'){
            putchar('!');
            count++;
        }else if(ch == '!'){
            putchar('!');
            putchar('!');
            count++;
        }
    }
    printf("\n");
    printf("It has made %d substitutions.\n", count);
    
    return 0;
}
