#include <stdio.h>
#include <string.h>
/*
 * 作者： Andy
 * 日期： 2021-10-06
 * 页码： 第372页
 * 目的： The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1, truncating
 *       s2 or padding it with extra null characters as necessary. The target string may not
 *       be null-terminated if the length of s2 is n or more. The function returns s1. Write
 *       your own version of this function; call it mystrncpy(). Test the function in a complete
 *       program that uses a loop to provide input values for feeding to the function.
 */
char * mystrncpy(char *s1, char *s2, int n);
int main(void)
{
    char s1[20] = "hello world";
    char s2[] = "Andy Hsu";

    for (int i = 0; i < strlen(s1); i++)
        printf("%c", s1[i]);
    printf("\n");
    
    mystrncpy(s1, s2, 7);
    for (int i = 0; i < strlen(s1); i++)
        printf("%c", s1[i]);
    printf("\n");
    return 0;
}

char * mystrncpy(char *s1, char *s2, int n){
    int i;
    for ( i = 0; i < strlen(s2) && i < n; i++){
        s1[i] = s2[i];   
    }
    s1[i] = '\0';
    return s1;
}
