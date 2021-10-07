#include <stdio.h>
#include <ctype.h>
#define MAX 80
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第372页
 * 目的： Use the character classification functions to prepare an implementation of atoi(); 
 *       have this version return the value of 0 if the input string is not a pure number.
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);
int atoi_andy(char * str);

int main(void)
{
    char str[MAX];
    int convert;

    printf("Enter a string: ");
    while (s_gets(str, MAX) && str[0]!='\0'){
        convert = atoi_andy(str);
        if (convert)
            printf("Success: %d\n", convert);
        else
            printf("Failed: 0\n");
        printf("Enter next string: ");
    }
    printf("Bye!\n");

    return 0;
}

int atoi_andy(char * str){
    int answer = 0;
    char * orig = str;
    while (*orig!='\0' && isdigit(*orig)){
        answer = 10*answer + (*orig - '0');
        orig++;
    }
    if (*orig == '\0'){
        return answer;
    }else
        return 0;
}
