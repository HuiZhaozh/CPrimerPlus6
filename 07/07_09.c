#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第198页
 * 目的： continue语句
 */

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit): ");
    while ((scanf("%f", &score)) == 1){
        if (score > MAX || score < MIN){
            printf("%0.1f is an invalid value. Try again: ", score);
            continue;
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min)? score: min;
        max = (score > max)? score: max;
        total += score;
        n++;
        printf("Enter next score (q to quit): ");
    }
    if(n > 0){
        printf("Average of %d scores is %0.1f.\n", n, total /n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }else
        printf("No valid scores were entered.\n");
    
    return 0;
}