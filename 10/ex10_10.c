#include <stdio.h>
#define SIZE 4
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a function that sets each element in an array to the sum of the corresponding
 *       elements in two other arrays. That is, if array 1 has the values 2, 4, 5, and 8 and
 *       array 2 has the values 1, 0, 4, and 6, the function assigns the array 3 the values 3,
 *       4, 9, and 14. The function should take three array names and an array size as arguments.
 *       Test the function in a simple program.
 */
void create(const int arr1[], const int arr2[], int arr3[], int number);
void show_array(int arr[], int n);
int main(void)
{
    int array1[SIZE] = {2, 4, 5, 8};
    int array2[SIZE] = {1, 0, 4, 6};
    int array3[SIZE];

    create(array1, array2, array3, SIZE);
    show_array(array3, SIZE);
    return 0;
}

void create(const int arr1[], const int arr2[], int arr3[], int number){
    int i;
    for(i=0; i<number; i++)
        arr3[i] = arr1[i]+arr2[i];
}

void show_array(int arr[], int n){
    int i = 0;
    for(i=0; i<n; i++)
        printf("%8d ", arr[i]);
    putchar('\n');
}