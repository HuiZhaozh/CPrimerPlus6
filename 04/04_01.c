#include <stdio.h>
#include <string.h>
#define DENSITY 62.4            //人体密度(单位：磅/立方英寸)
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第071页
 * 目的： 与用户进行简单的交互
 */

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi, What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cube feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
    
    return 0;
}
