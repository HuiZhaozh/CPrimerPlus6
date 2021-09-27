#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Write and test a function called larger_of() that replaces the contents
 *       of two double variables with the maximum of the two values. For example,
 *       larger_of(x,y) would reset both x and y to the larger of the two.
 */
void larger_of(double * i, double * j);

int main(void)
{
    double i, j;

    printf("Please enter two numbers: ");
    while (scanf("%lf %lf", &i, &j) == 2){
        larger_of(&i, &j);
        printf("Now they are reset to the large one of the two, so they are: %lf, %lf\n",
                i, j);
        printf("Please enter two numbers: ");
    }
    printf("Bye.\n");
    
    return 0;
}

void larger_of(double * i, double * j){
    *i = *j = *i > *j? *i: *j;
}

