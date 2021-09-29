#include <stdio.h>
#define SIZE 8
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a function that reverses the contents of an array of double and test it in
 *       a simple program.
 */
void reverse(double arr[], int numbers);
void show_array(double arr[], int n);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 8.8, 7.7, 6.6, 5.5};

    printf("The contents of the array are:\n");
    show_array(source, SIZE);

    reverse(source, SIZE);
    printf("The contents of the array now are:\n");
    show_array(source, SIZE);
    
    return 0;
}

void reverse(double arr[], int numbers){
    double tmp;
    int head = 0;
    int tail = numbers-1;

    while (head < tail){
        tmp = arr[head];
        arr[head] = arr[tail];
        arr[tail] = tmp; 
        head++;
        tail--;
    }
}

void show_array(double arr[], int n){
    int i = 0;
    for(i=0; i<n; i++)
        printf("%8.2f ", arr[i]);
    putchar('\n');
}