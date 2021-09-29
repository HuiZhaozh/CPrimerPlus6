#include <stdio.h>
#define ROWS 3
#define COLS 5
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a program that declares a 3x5 array of int and initializes it to some values
 *       of your choice. Have the program print the values, double all the values, and then
 *       display the new values. Write a function to do the displaying and a second function
 *       to do the doubling. Have the functions take the array name and the number of rows
 *       as arguments.
 */
void display(int arr[][COLS], int rows);
void doubling(int arr[][COLS], int rows);
int main(void)
{
    int array[ROWS][COLS] = {
        {1, 2, 3, 4, 5}, 
        {6, 7, 8, 9, 10}, 
        {11, 12, 13, 14, 15}
        };
    
    display(array, ROWS);
    doubling(array, ROWS);
    display(array, ROWS);
    return 0;
}

void display(int arr[][COLS], int rows){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<COLS; j++)
            printf("%4d ", arr[i][j]);
    }
    printf("\n");
}

void doubling(int arr[][COLS], int rows){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<COLS; j++)
            arr[i][j] *= 2;
    }
}

