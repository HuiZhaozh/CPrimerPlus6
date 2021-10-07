#include <stdio.h>
#include <ctype.h>
#define MAX 81
/*
 * 作者： Andy
 * 日期： 2021-10-06
 * 页码： 第372页
 * 目的： Write a function that takes a string as an argument and removes the spaces from the
 *       string. Test it in a program that uses a loop to read lines until you enter an empty
 *       line. The program should apply the function to each input string and display the result.
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);
int drop_space(char * st);

int main(void)
{
    char orig[MAX];

    puts("Enter a string of no more than 80 characters (or press ENTER to quit)");
    while (s_gets(orig, MAX) && orig[0] != '\0'){
        drop_space(orig);
        puts(orig);
        puts("Enter next string (or press ENTER to quit)");
    }
    puts("Bye!");
    return 0;
}

int drop_space(char * st){
    int count = 0;
    char * pos;

    while (*st){
        if(isspace(*st)){
            count++;
            pos = st;
            while (*pos){
                *pos = *(pos+1);
                pos++;
            }
        }
        ++st;
    }
    return count;
}