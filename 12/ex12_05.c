#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第410页
 * 目的： Write a program that generates a list of 100 random numbers in the range 1-10 in sorted
 *       decreasing order. (You can adapt the sorting algorithm from Chapter 11, "Character Strings
 *       and String Functions,", to type int. In this case, just sort the numbers themselves.)
 */
void print(const int arr[], int n);
void sort(int arr[], int n);

int main(void)
{
    int arr[SIZE];
    int i;

    srand(time(0));
    for ( i = 0; i < SIZE; i++)
        arr[i] = rand() % 10 + 1;
    puts("initial array");
    print(arr, SIZE);
    sort(arr, SIZE);

    puts("sorted array");
    print(arr, SIZE);
    printf("Bye!\n");

    return 0;
}

void print(const int arr[], int n){
    int i;
    for ( i = 0; i < n; i++){
        printf("%2d ", arr[i]);
        if(i % 10 == 9)
            putchar('\n');
    }
    if(i % 10 != 0)
        putchar('\n');
}


void sort(int arr[], int n){
    int i, j;
    int temp;

    for (i = 0; i < n-1; i++)
    for (j = i+1; j < n; j++)
        if(arr[i] < arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
}