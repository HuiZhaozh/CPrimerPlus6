#include <stdio.h>
#define ROWS 3
#define COLS 5
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Write a program that prompts the user to enter three sets of five double numbers each.
 *       (You may assume that the user responds correctly and doesn't enter non-numeric data.) The
 *       program should accomplish all of the following:
        a. Store the information in a 3x5 array.
        b. Compute the average of each set of five values.
        c. Compute the average of all the values.
        d. Determine the largest value of the 15 values.
        e. Report the results.
 *       Each major task should be handled by a separate function using the traditional C
 *       approach to handling arrays. Accomplish task "b" by using a function that computes
 *       and returns the average of a one-dimensional array; use a loop to call this function
 *       three times. The other tasks should take the entire array as an argument, and the
 *       functions performing tasks "c" and "d" should return the answer to the calling program.
 */
void store(double array[][COLS], int rows);
void report(double array[][COLS], int rows);
double average(double arr[], int cols);
double average_all(double arr[][COLS], int rows);
double largest(double arr[][COLS], int rows);
int main(void)
{
    double array[ROWS][COLS];

    store(array, ROWS);
    report(array, ROWS);
    return 0;
}

void store(double array[][COLS], int rows){
    int i, j;
    printf("Please Enter %d sets of five double numbers:\n", rows);
    for(i=0; i<rows; i++){
        printf("%d set: ", i+1);
        for(j=0; j<COLS; j++)
            scanf("%lf", &array[i][j]);
    }
}

void report(double array[][COLS], int rows){
    int i;
    for(i=0; i<rows; i++)
        printf("The average of %d set of five values is: %.2lf\n", i+1, average(array[i], COLS));
    printf("The average of all values is %.2f\n", average_all(array, rows));
    printf("The largest value of all values is %.2f\n", largest(array, rows));
}

double average(double arr[], int cols){
    double average = 0;
    int i;

    for(i=0; i<cols; i++)
        average += arr[i];
    return average / cols;
}

double average_all(double arr[][COLS], int rows){
    int i, j;
    double total = 0;

    for(i=0; i<rows; i++)
        for(j=0; j<COLS; j++)
            total += arr[i][j];
    return total / (COLS*rows);
}

double largest(double arr[][COLS], int rows){
    int i, j;
    double largest = arr[0][0];

    for(i=0; i<rows; i++)
        for(j=0; j<COLS; j++)
            if(largest < arr[i][j])
                largest = arr[i][j];
    return largest;
}

