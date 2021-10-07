#include <stdio.h>
#include <string.h>
/*
 * 作者： Andy
 * 日期： 2021-10-05
 * 页码： 第372页
 * 目的： Design and test a function that searches the string specified by the first function
 *       parameter for the first occurrence of a character specified by the second function
 *       parameter. Have the function return a pointer to the character if successful, and a
 *       null if the character is not found in the string. (This duplicates the way that the
 *       library strchr() function works.) Test the function in a complete program that uses
 *       a loop to provide input values for feeding to the function.
 */
char * strchr_andy(char * str, int key);

int main(void)
{
    char str[20];
    char key;

    printf("Enter the string and the character: ");
    while (scanf("%s%c", str, &key) == 2){
        char * check = strchr_andy(str, key);
        if(!check)
            printf("The character %c is not found in the string %s.\n", key, str);
        else
            printf("THe character %c is found int the string %s!\n", *check, str);
        printf("Enter another pair of the string and the character: ");
        while (getchar() != '\n')
            continue;  
    }
    
    return 0;
}

char * strchr_andy(char * str, int key){
    for (int i = 0; i < strlen(str); i++){
        if(str[i] == key)
            return str+i;
    }
    return NULL;
}