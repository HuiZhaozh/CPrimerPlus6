#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-26
 * 页码： 第242页
 * 目的： 猜数字V2版本
 *       Modify the guessing program of Listing 8.4 so that it uses a more
 *       intelligent guessing strategy. For example, have the program initially
 *       guess 50, and have it ask the user whether the guess is high, lower, or
 *       correct. If, say, the guess is low, have the next guess be halfway between
 *       50 and 100, that is, 75. If that guess is high, let the next guess be
 *       halfway between 75 and 50, and so on. Using this binary search strategy,
 *       the program quickly zeros in on the correct answer, at least if the user
 *       does not cheat.
 */

int main(void)
{
    char response;
    int upper_limit = 100;
    int lower_limit = 0;
    int guess = (upper_limit + lower_limit) / 2;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and whit");
    printf("\n an n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y'){
        switch (response)
        {
        case 'l':
            lower_limit = guess + 1;
            break;
        case 'h':
            upper_limit = guess - 1;
            break;
        default:
            printf("Please enter h, l or y. \n");
            while (getchar() != '\n')
                ;
            continue;
        }
        guess = (lower_limit + upper_limit) / 2;
        printf("Well, then, is it %d?\n", guess);
        while (getchar() != '\n')
                ;
    }
    printf("I knew I could do it!, the answer is %d\n", guess);
    
    return 0;
}