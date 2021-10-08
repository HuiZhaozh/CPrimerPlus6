#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第409页
 * 目的： Rewrite the program in Listing 12.4 so that it does not use global variables.
 */
void critic(int * units);

int main(void)
{
    int units = 0;

    printf("How many pounds to firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic(&units);
    printf("You must have looked it up!\n");
    return 0;
}

void critic(int * units){
    printf("No luck, my friend, Try again.\n");
    scanf("%d", units);
}
