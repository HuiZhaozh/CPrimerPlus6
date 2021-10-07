#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第372页
 * 目的： Write a program that reads input up to EOF and reports the number of words, the
 *       number of uppercase letters, the number of lowercase letters, the number of
 *       punctuation characters, and the number of digits. Use the ctype.h family of functions.
 */

int main(void)
{
    char ch;
    int words_ct = 0;
    int low_ct = 0;
    int up_ct = 0;
    int punc_ct = 0;
    int dig_ct = 0;
    bool inword = false;

    printf("Enter text to be analyzed (EOF to terminate):\n");
    while ((ch = getchar()) != EOF){
        if(islower(ch))
            low_ct++;
        else if(isupper(ch))
            up_ct++;
        else if(isdigit(ch))
            dig_ct++;
        else if(ispunct(ch))
            punc_ct++;
        if(!isspace(ch) && !inword){
            inword = true;
            words_ct++;
        }
        if(isspace(ch) && inword)
            inword = false;
    }
    printf("words = %d, lowercase = %d, uppercase = %d, punctuation = %d, digits = %d\n",
            words_ct, low_ct, up_ct, punc_ct, dig_ct);

    return 0;
}

