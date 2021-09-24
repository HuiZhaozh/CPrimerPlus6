#include <stdio.h>
#define STOP '#'
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： Redo exercise 4 using a switch.
 */

int main(void)
{
    char ch;
    int count = 0;

    printf("Please enter your characters:\n");
    while ( (ch = getchar())!= STOP){
        switch (ch)
        {
        case '.':
            putchar('!');
            count++;
            break;
        case '!':
            putchar('!');
            putchar('!');
            count++;
            break;
        default:
            break;
        }
    }
    printf("\n");
    printf("It has made %d substitutions.\n", count);
    
    return 0;

}
