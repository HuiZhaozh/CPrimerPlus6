#include <stdio.h>
#define SIZE 8
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a function that returns the difference between the largest and smallest elements of
 *       an array-of-double. Test the function in a simple program.
 */

double diff_range(double arr[], int number);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 8.8, 7.7, 6.6, 5.5};

    printf("The difference between the largest and smallest stored in the array is %.1f\n",
            diff_range(source, SIZE));
    return 0;
}

double diff_range(double arr[], int number){
    double largest = *arr;
    double smallest = *arr;
    int i;
    for(i=1; i<number; i++){
        if(largest < *(arr+i))
            largest = *(arr+i);
        if(smallest > *(arr+i))
            smallest = *(arr+i);
    }
    return largest-smallest;
}