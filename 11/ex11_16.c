#include <stdio.h>
#include <ctype.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第372页
 * 目的： Write a program that reads input until end-of-file and echoes it to the display. Have the
 *       program recognize and implement the following command-line arguments:
         -p		Print input as is
         -u		Map input to all uppercase
         -l		Map input to all lowercase
 *       Also, if there are no command-line arguments, let the program behave as if the -p
 *       argument had been used.
 */

int main(int argc, char * argv[])
{
    char mode = 'p';
    int ch;
    int choice = 1;

    if(argc > 2){
        printf("Usage: %s [-p|-u|-l].\n", argv[0]);
        choice = 0;
    }else if(argc == 2){
        if(argv[1][0] != '-'){
            printf("Usage: %s [-p|-u|-l].\n", argv[0]);
            choice = 0;
        }else{
            switch (argv[1][1]){
            case 'p':
            case 'u':
            case 'l':
                mode = argv[1][1];
                break;
            default:
                choice = 0;
                printf("%s is an invalid flag; ", argv[1]);
                break;
            }
        }
    }

    if(choice){
        while ((ch=getchar()) != EOF){
            switch (mode)
            {
            case 'p':
                putchar(ch);
                break;
            case 'u':
                putchar(toupper(ch));
                break;
            case 'l':
                putchar(tolower(ch));
                break;
            }
        }            
    }
    return 0;
}
