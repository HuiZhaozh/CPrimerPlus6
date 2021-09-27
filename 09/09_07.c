#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第259页
 * 目的： 尾递归
 */

long fact(int n);           // 循环形式实现的阶乘运算
long rfact(int n);          // 递归形式实现的阶乘运算

int main(void)
{
    int num;

    printf("This program calucates facorials.\n");
    printf("Enter a value in the range of 0 ~ 12 (q to quit):\n");
    while (scanf("%d", &num) == 1){
        if(num < 0)
            printf("No negative numbers, please.\n");
        else if(num > 12)
            printf("keep input under 13:\n");
        else{
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
    printf("Enter a value in the range of 0 ~ 12 (q to quit):\n");  
    }
    printf("Bye.\n");

    return 0;
}

long fact(int n){
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}

long rfact(int n){
    long ans;
    if(n > 0)
        ans = n * rfact(n-1);
    else
        ans = 1;
        return ans;
}