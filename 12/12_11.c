#include <stdio.h>
#include <stdlib.h>
#include "12_12.h"
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第393页
 * 目的： 掷骰子（需和12_13.c一起编译）
 */
int roll_count = 0;                     // 掷骰子的次数

static int rollem(int sides){           // 掷骰子(1个)
    int roll;
    roll = rand() % sides + 1;
    ++roll_count;
    return roll;
}

int roll_n_dice(int dice, int sides){   // 掷骰子(dice个，即1轮)
    int d;
    int total;

    if(sides < 2){
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if(dice < 1){
        printf("Need at least 1 dice.\n");
        return -1;
    }
    for ( d = 0; d < dice; d++)
        total += rollem(sides);
    
    return total;
}
