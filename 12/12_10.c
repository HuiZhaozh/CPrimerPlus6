#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第391页
 * 目的： 自定义随机数函数2（需和12_09.c一起编译）
 */
extern unsigned int rand1(void);
void srand1(unsigned int seed);

int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf("%u", &seed) == 1){
        srand1(seed);
        for ( count = 0; count < 5; count++)
            printf("%d\n", rand1());
        printf("Please enter next seed (q to quit):\n");
    }
    
    return 0;
}