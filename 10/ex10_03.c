#include <stdio.h>
#define SIZE 8
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a function that returns the largest value stored in an array-int. Test the function
 *       in a simple program.
 */

int get_max(int arr[], int n);


int main(void)
{
    int array[SIZE] = {2, 4, 6, 8, 7, 5, 3, 1};

    printf("The largest value stored in the array is %d.\n", get_max(array, SIZE));
    return 0;
}

int get_max(int arr[], int n){
    int largest = *arr;
    int i;

    for(i=1; i<n; i++){
        if(largest < *(arr+i))
            largest = *(arr+i);
    }
    return largest;
}