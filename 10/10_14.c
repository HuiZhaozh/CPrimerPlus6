#include <stdio.h>
#define SIZE 5
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第299页
 * 目的： 数组作为形参是否需要加const
 */

void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);

int main(void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

    printf("The original dip array:\n");
    show_array(dip, SIZE);
    mult_array(dip, SIZE, 2.5);
    printf("The dip array after calling mult_arry:\n");
    show_array(dip, SIZE);

    return 0;
}

void show_array(const double ar[], int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%8.3f", ar[i]);
    putchar('\n');
}

void mult_array(double ar[], int n, double mult){
    int i;
    for(i = 0; i < n; i++)
        ar[i] *= mult;
}

/*
 * 经验总结
 *   如果函数需要修改数组的数据，形参不加const；如果不要修改数据，形参加const
 */