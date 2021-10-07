#include <stdio.h>
#include <string.h>
#define LEN 40
/*
 * 作者： Andy
 * 日期： 2021-10-06
 * 页码： 第372页
 * 目的： Write a function called string_in() that takes two string pointers as arguments.
 *       If the second string is contained in the first string, have the function return
 *       the address at which the contained string begins. For instance, string_in("hats", "at")
 *       would return the address of the a in hats. Otherwise, have the function return the null
 *       pointer. Test the function in a complete program that uses a loop to provide input values
 *       for feeding to the function.
 */
char * string_in(const char * s1, const char * s2);

int main(void)
{
    char orig[LEN] = "hello world, andy hsu";
    char pattern[LEN];
    char * find;

    printf("Enter pattern: ");
    while (scanf("%s", pattern) == 1){
        printf("First string: %s\n", orig);
        find = string_in(orig, pattern);
        if(find)
            printf("Result: %s\n", find);
        else
            puts("Result: Not found");
        printf("Enter next pattern: ");
    }

    return 0;
}

char * string_in(const char * s1, const char * s2){
    int check_limmit = strlen(s1) - strlen(s2) + 1;
    while (strncmp(s1, s2, strlen(s2)) && check_limmit--)
        ++s1;
    if(check_limmit > 0)
        return (char *)s1;
    else
        return NULL;  
}

