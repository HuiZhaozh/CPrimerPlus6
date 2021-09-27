#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Write and test a function that takes the addresses of three double
 *       variables as arguments and that moves the value of the smallest variable
 *       into the first variable, the middle value to the second variable, and the
 *       largest value into the third variable.
 */
void sort(double * i, double * j, double * k);

int main(void)
{
    double i, j, k;

    printf("Please enter 3 numbers: ");
    while (scanf("%lf %lf %lf", &i, &j, &k) == 3){
        sort(&i, &j, &k);
        printf("Now, after being sort, i = %lf, j = %lf, k = %lf.\n", i, j, k);
        printf("Please enter the next three numbers (# to quit): ");
    }
    
    return 0;
}

void sort(double * i, double * j, double * k){
    // 使用嵌套的if语句来实现
    double temp1;
    if(*i < *j){
        if(*i < *k){
            // i最小，比较j和k即可
            if(*j > *k){
                temp1 = *j;
                *j = *k;
                *k = temp1;
            }
        }else{
            // k < i < j
            temp1 = *i;
            *i = *k;
            *k = temp1;
            temp1  = *j;
            *j = *k;
            *k = temp1;
        }
    }else{
        if(*i < *k){
            // j < i < k
            temp1 = *j;
            *j = *i;
            *i = temp1;
        }else{
            if (*j < *k){
                // j < k < i
                temp1 = *j;
                *j = *i;
                *i = temp1;
                temp1 = *j;
                *j = *k;
                *k = temp1;
            }else{
                // k < j < i
                temp1 = *i;
                *i = *k;
                *k = temp1;
            }  
        }
    }
}
