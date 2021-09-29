#include <stdio.h>
#define ROWS 3
#define COLS 5
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第319页
 * 目的： Do Programming Exercise 13, but use variable-length array function parameters. 
 */
void store(int rows, int cols, double array[rows][cols]);
void report(int rows, int cols, double array[rows][cols]);
double average(double arr[], int cols);
double average_all(int rows, int cols, double array[rows][cols]);
double largest(int rows, int cols, double array[rows][cols]);
int main(void)
{
    double array[ROWS][COLS];

    store(ROWS, COLS, array);
    report(ROWS, COLS, array);
    return 0;
}

void store(int rows, int cols, double array[rows][cols]){
    int i, j;
    printf("Please Enter %d sets of five double numbers:\n", rows);
    for(i=0; i<rows; i++){
        printf("%d set: ", i+1);
        for(j=0; j<cols; j++)
            scanf("%lf", &array[i][j]);
    }
}

void report(int rows, int cols, double array[rows][cols]){
    int i;
    for(i=0; i<rows; i++)
        printf("The average of %d set of five values is: %.2lf\n", i+1, average(array[i], cols));
    printf("The average of all values is %.2f\n", average_all(rows, cols, array));
    printf("The largest value of all values is %.2f\n", largest(rows, cols, array));
}

double average(double arr[], int cols){
    double average = 0;
    int i;

    for(i=0; i<cols; i++)
        average += arr[i];
    return average / cols;
}

double average_all(int rows, int cols, double array[rows][cols]){
    int i, j;
    double total = 0;

    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
            total += array[i][j];
    return total / (cols*rows);
}

double largest(int rows, int cols, double array[rows][cols]){
    int i, j;
    double largest = array[0][0];

    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
            if(largest < array[i][j])
                largest = array[i][j];
    return largest;
}

