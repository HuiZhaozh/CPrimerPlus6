#include <stdio.h>
#include <stdbool.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第215页
 * 目的： Write a program that accepts a positive integer as input and then displays
 *       all the prime numbers smaller than or equal to that number.
 */
bool isPrime(int i);

int main(void)
{
    int n, j;

    printf("Please enter a positive integer:\n");
    scanf("%d", &n);
    printf("All the prime numbers that smaller than or equal to %d are:\n", n);
    for(j = 2; j <= n; j++){
        if(isPrime(j))
            printf("%d ",j);
    }
    printf("\n");
    return 0;
}

bool isPrime(int i){
    int j;
    for (j = 2; j * j <= i  ; j++){
        if(i % j == 0)
            return false;
    }
    return true;
}
