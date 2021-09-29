#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a program that initializes a two-dimensional array-of-double and uses one of
 *       the copy function from exercise 2 to copy it to a second two-dimensional array. 
 *       (Because a two-dimensional array is an array of arrays, a one-dimensional copy
 *       function can be used with each subarray.)
 */
void copy_arr(double target[], const double source[], int number);
void show_array(double arr[], int n);
int main(void)
{
    double source[2][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6}
    };
    double target[2][3];
    int i;

    for(i=0; i<2; i++)
        copy_arr(target[i], source[i], 3);
    for(i=0; i<2; i++)
        show_array(target[i], 3);
    return 0;
}


void copy_arr(double target[], const double source[], int number){
    int i;
    for(i=0; i<number; i++)
        target[i] = source[i];
}

void show_array(double arr[], int n){
    int i = 0;
    for(i=0; i<n; i++)
        printf("%8.2f ", arr[i]);
    putchar('\n');
}



