#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Use a copy function from Programming Exercise 2 to copy the third through fifth
 *       elements of a seven-element array into a three-element array. The function itself
 *       need not be altered; just choose the right actual arguments. (The actual arguments
 *       need not be an array name and array size. They only have to be the address of an
 *       array element and a number of elements to be processed.)
 */
void copy_ptrs(double target[], double * start, double * end);
void show_array(double arr[], int n);

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];

    copy_ptrs(target, source+2, source+5);
    show_array(target, 3);
    return 0;
}

void copy_ptrs(double target[], double * start, double * end){
    int i = 0;

    while (start < end){
        *(target+i) = *start;
        start++;
        i++;  
    }
}

void show_array(double arr[], int n){
    int i = 0;
    for(i=0; i<n; i++)
        printf("%8.2f ", arr[i]);
    putchar('\n');
}

