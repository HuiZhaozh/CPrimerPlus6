#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第037页
 * 目的： Write a program that produces the following output:

    For he's a jolly good fellow!
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    Which nobody can deny!

*   Have the program use two user-defined functions in addition to main(): 
*   one namedjolly() that prints the "jolly good" message once, 
*   and one named deny() that prints the final line once.
*/

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    
    return 0;
}

void jolly(void){
    printf("For he's a jolly good fellow!\n");
}

void deny(void){
    printf("Which nobody can deny!\n");
}