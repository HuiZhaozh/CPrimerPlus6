#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第410页
 * 目的： Write a program that behaves like the modification of Listing 12.13, which we discussed
 *       after showing the output of Listing 12.13. That is, have the program produce output like
 *       the following:
             Enter the number of sets; enter q to stop: 18
             How many sides and how many dice? 6 3
             Here are 18 sets of 3 6-sided throws.
             12  10   6   9   8  14   8  15   9  14  12  17  11   7  10
             13   8  14
             How many sets? Enter q to stop: q
 */
int rollem(int sides);

int main(void)
{
    int dice, sides;
    int roll;           // 掷骰子1轮的点数和
    int count;
    int set, sets;      // sets代表玩几轮

    srand((unsigned int)time(0));
    printf("Enter the number of sets; enter q to stop.\n");
    while (scanf("%d", &sets) == 1){
        printf("How many sides and how many dice?");
        if(scanf("%d %d", &sides, &dice) != 2){
            puts("not integers -- terminating input loop.");
            break;
        }
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for ( set = 0; set < sets; set++){
            // 代表一轮游戏
            for ( roll = 0, count = 0; count < dice; count++)
                roll += rollem(sides);
            printf("%4d ", roll);
            if(set % 15 == 14)
                putchar('\n');
        }
        if(set % 15 != 0)
            putchar('\n');
        printf("How many sets? enter q to stop.\n");
    }
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}


int rollem(int sides){           // 掷骰子(1个)
    int roll;
    roll = rand() % sides + 1;
    return roll;
}
