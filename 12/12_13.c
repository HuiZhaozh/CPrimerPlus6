#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12_12.h"
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第394页
 * 目的： 掷骰子（需和12_11.c一起编译）
 */

int main(void)
{
    int dice, sides;
    int roll;           // 掷骰子1轮的点数和
    int status;

    srand((unsigned int)time(0));
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) && sides>0){
        printf("How many dice?\n");
        if((status = scanf("%d", &dice)) != 1){
            if(status == EOF)
                break;
            else{
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar() != '\n')
                    continue;
                printf("Enter the number of sides per die, 0 to stop.\n");
                    continue;
            }
        }
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sides dice.\n", roll, dice, sides);
        printf("Enter the number of sides per die, 0 to stop.\n");
    }
    printf("The rollem() function  was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");
    
    return 0;
}