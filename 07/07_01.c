#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第177页
 * 目的： if语句
 */

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int all_days = 0;
    int cold_days = 0;

    printf("Enter the list of daily low temperature.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1){
        all_days++;;
        if (temperature < FREEZING)
            cold_days++;
    }
    if(all_days != 0)
        printf("%d days total: %.1f%% were below freezing.\n", all_days, 
                100.0 * (float)cold_days / all_days);
    if(all_days == 0)
        printf("No data entered!\n");
    
    return 0;
}