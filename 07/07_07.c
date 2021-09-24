#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'                // 表示输入末尾的值
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第195页
 * 目的： 逻辑运算符
 */

int main(void)
{
    char ch;                    // 读入的当前字符
    char prev;                  // 读入的上一个字符
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;            // 不完整的行
    bool inword = false;

    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';
    while ( (ch = getchar())!= STOP){
        n_chars++;
        if(ch == '\n')
            n_lines++;
        if (!isspace(ch) && !inword){
            inword = true;
            n_words++;
        }
        if(isspace(ch) && inword)
            inword = false;
        prev = ch;
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, partial lines = %d\n",
            n_chars, n_words, n_lines, p_lines);
    return 0;
}