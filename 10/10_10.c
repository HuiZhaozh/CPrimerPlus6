#include <stdio.h>
#define SIZE 10
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第292页
 * 目的： 数组作为形参和普通数组的不同
 */
int sum(int ar[], int n);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    int answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %d.\n", answer);
    printf("The size of ar is %zd bytes.\n", sizeof(marbles));
    return 0;
}

int sum(int ar[], int n){
    // 编译器看来，ar并不是数组本身，它只是指向数组首元素的一个指针(指针是一个变量)
    // 而没有经验的程序员看来，ar似乎是数组(当然，这种认识是错误的)
    int i;
    int total = 0;

    for(i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof(ar));
    return total;
}