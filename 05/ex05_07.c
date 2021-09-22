#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第134页
 * 目的： 
 *     Write a program that requests a type double number and prints the value of
 *     the number cubed. Use a function of your own design to cube the value and
 *     print it. The main() program should pass the entered value to this function.
 */
void cube(double n);

int main(void)
{
    double d;

    printf("Please enter a type double number:\n");
    scanf("%lf", &d);
    cube(d);
    
    return 0;
}

void cube(double n){
    double cubed;
    cubed = n * n *n;
    printf("The value of %e cubed is %e.\n", n, cubed);
}
