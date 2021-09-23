#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第175页
 * 目的： 
         Have a program request the user to enter an uppercase letter. Use nested
         loops to produce a pyramid pattern like this:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
 * The pattern should extend to the character entered. For example, the preceding
 * pattern would result from the input value of E. Hint: Use an outer loop to handle
 * the rows. Use three inner loops in a row, one to handle the spaces, one for 
 * printing letters in ascending order, and one for printing letters in descending
 * order. If your system doesn't use ASCII or a similar system that represents letters
 * in a strict number order, see the suggestion in programming exercise 3.
 */

int main(void)
{
    int row, space;
    char ch;
    char c_tmp;

    printf("Please enter an uppercase letter:\n");
    scanf("%c", &ch);
    for (row = 0; row < ch - 'A' + 1; row++){
        // 第1个循环控制空格
        for (space = 0; space < ch - 'A' - row; space++)
            printf(" ");
        // 第2个循环控制升序字符
        for (c_tmp = 'A'; c_tmp < 'A' + row + 1; c_tmp++)
            printf("%c", c_tmp);
        // 第3个循环控制降序字符
        for (c_tmp = 'A' + row - 1; c_tmp >= 'A'; c_tmp--)
            printf("%c", c_tmp);
        printf("\n");
    }

    return 0;
}
