#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第037页
 * 目的： 
    Write a program that uses one printf() call to print your first name and last name on
    one line, uses a second printf() call to print your first and last names on two separate
    lines, and uses a pair of printf() calls to your first name and last names on one line.
    The output should look like this (but using your name):

    Gustav Mahler <- First print statement
    Gustav		<- Second print statement
    Mahler		<- Still the second print statement
    Gustav Mahler	<- Third and fourth print statements
 */

int main(void)
{
    printf("Andy Hsu\n");
    printf("Andy\nHsu\n");
    printf("Andy ");
    printf("Hsu\n");
    return 0;
}