#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
#define TIMES 10
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第410页
 * 目的： Write a program that generates 1,000 random numbers in the range 1-10. Don't save or
 *       print the numbers, but do print how many times each number was produced. Have the program
 *       do this for 10 different seed values. Do the numbers appear in equal amounts? You can use
 *       the functions from this chapter or the ANSI C rand() and srand() functions, which follow
 *       the same format that our functions do. This is one way to examine the randomness of a
 *       particular random-number generator.
 */
void array_reset(int arr[], int size);
void set_seed(int seed[], int size);
int main(void)
{
    int arr[TIMES] = {0};
    int seed[TIMES];
    int i;
    int j;
    int k;

    set_seed(seed, TIMES);
    printf("The times each number was product:\n");
    for ( k = 0; k < 10; k++){
        if(k == 0)
            printf("%12d ", k+1);
        else
            printf(" %4d", k+1);
    }
        
    putchar('\n');

    for ( i = 0; i < TIMES; i++){
        array_reset(arr, TIMES);
        srand((unsigned int)seed[i]);
        printf("Round%2d: ", i+1);

        for ( j = 0; j < SIZE; j++)
            arr[rand()%10]++;
        for ( k = 0; k < 10; k++){
            printf("%4d ", arr[k]);
        }
        putchar('\n');
    }
    
    return 0;
}

void array_reset(int arr[], int size){
    int i;
    
    for ( i = 0; i < size; i++)
        arr[i] = 0;
}

void set_seed(int seed[], int size){
    printf("Enter 10 integer as seeds\n");
    for (int i = 0; i < TIMES; i++)
        scanf("%d", &seed[i]);
}
