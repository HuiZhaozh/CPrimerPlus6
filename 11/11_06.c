#include <stdio.h>
#define SLEN 81
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第330页
 * 目的： 不幸的gets函数
 */

int main(void)
{
    char words[SLEN];

    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}

/*
 * 经验总结
 *   (1) gets函数，读取一行输入到遇到换行符为止，并【丢弃】换行符(注意，并【不是放回缓冲区】，而是丢弃掉)
 *   (2) puts函数，输出字符串，并主动再次添加一个'\n'换行符
*/