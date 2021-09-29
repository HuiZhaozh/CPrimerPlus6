#include <stdio.h>
#define SIZE 10
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第293页
 * 目的： 使用指针作为形参
 */
int sump(int * start, int * end);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    int answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %d.\n", answer);
    return 0;
}

int sump(int * start, int * end){
    // start是指向数组首元素的指针
    // end是指向数组尾元素的下一个位置的指针(C语言保证该指针位置“有效”，但却不对该位置上的值作任何保证)
    int total = 0;
    while (start < end){
        total += *start;
        start++;
    }
    return total; 
}