#include <stdio.h>
#define COVERAGE 350            // 每罐油漆可刷的面积(单位：平方英尺)
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第197页
 * 目的： 条件运算符
 */

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1){
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0)? 0: 1;
        printf("You need %d %s of paints.\n", cans,
                cans==1 ? "can": "cans");
    }
    
    return 0;
}