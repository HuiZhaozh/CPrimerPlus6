#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第092页
 * 目的： 使用scanf
 */

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favourite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}