#include <stdio.h>
#include <stdbool.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第188页
 * 目的： 嵌套的if语句
 */

int main(void)
{
    unsigned long num;          // 待测试的数字
    unsigned long div;          // 可能的约数
    bool isPrime;               // 素数标记

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while ((scanf("%lu", &num)) == 1){
        for (div = 2, isPrime = true; div * div <= num; div++){
            if (num % div == 0){
                if(div * div != num)
                    printf("%lu is divisible by %lu and %lu.\n", 
                            num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n", num, num / div);
                isPrime = false;
            }
        }
        if (isPrime)
            printf("%lu is a prime.\n", num);
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
    
    return 0;
}