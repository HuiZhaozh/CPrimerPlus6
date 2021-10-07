#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第372页
 * 目的： Write a program that echoes the command-line arguments in reverse word order. That
 *       is, if the command-line arguments are see you later, the program should print later
 *       you see.
 */

int main(int argc, char * argv[])
{
    if(argc < 2){
        printf("Error: at least 1 command-line argument required,\n");
        return 1;
    }else{
        for (int i = argc-1; i > 0; i--){
            printf("%s ", argv[i]);
        }
        printf("\n");
        return 0;
    }
}

