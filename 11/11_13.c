#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第338页
 * 目的： puts遇到空字符停止输出; 字符数组必须以\0结尾才是字符串
 */

int main(void)
{
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Sibe B";
    
    puts(dont);             // dont不是一个字符串
    printf("%p %p %p\n", side_a, dont, side_b);
    return 0;
}