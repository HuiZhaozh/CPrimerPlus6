#include <stdio.h>
#define SIZE 8
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a function that returns the index of the largest value stored in an array-of-double.
 *       Test the function in a simple program.
 */

int max_index(double array[], int number);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 8.8, 7.7, 6.6, 5.5};
    
    printf("The index of the largest value stored in the array is %d\n", max_index(source, SIZE));
    return 0;
}

int max_index(double array[], int number){
    double largest = *array;
    int max_index = 0;
    int i;

    for(i=0; i<number; i++){
        if (largest < *(array+i)){
            largest = *(array+i);
            max_index = i;
        }  
    }
    return max_index;
}