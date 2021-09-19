#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第037页
 * 目的： Many studies suggest that smiling has benefits. Write a program that produces the following output:
   Smile!Smile!Smile!
   Smile!Smile!
   Smile!

 * Have the program define a function that displays the string Smile! once, 
 * and have the program use the function as often as needed.
*/

void smile(void);

int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
    
    return 0;
}

void smile(void){
    printf("Smile!");
}