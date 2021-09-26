#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
/*
 * 作者： Andy
 * 日期： 2021-09-26
 * 页码： 第242页
 * 目的： Write a program that reads input as a stream of characters until encoutering
 *       EOF. Have it report the average number of letters per word. Don't count
 *       whitespace as being letters in a word. Actually, punctuation shouldn't be
 *       counted either, but don't worry about that now. (If you do want to worry
 *       about it, consider using the ispunct() function from the ctype.h family.)
 */

int main(void)
{
    char ch;
    double num_of_letters = 0;
    double num_of_words = 0;
    float average;
    bool in_word = false;

    while ((ch = getchar()) != EOF){
        if(ispunct(ch))
            continue;
        else if(isspace(ch)){
            in_word =false;
            continue;
        }else{
            num_of_letters++;
            if (in_word == false){
                in_word = true;
                num_of_words++;
            } 
        }
    }
    average = num_of_letters / num_of_words;
    printf("total leters: %f --- total words: %f.\n", num_of_letters, num_of_words);
    printf("The average number of letters per word is %f.\n", average);
    
    return 0;
}

