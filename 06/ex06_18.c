#include <stdio.h>
#define DUNBAR 150
#define INITIAL 5
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第176页
 * 目的： 
 *      Professor Rabnud joined a social media group. Initial he had five friends.
 *      He noticed that his friend count grew in the following fashion. The first
 *      week one friend dropped out and the remaining number of friends doubled.
 *      The second week two friends dropped out and the remaining number of friends
 *      doubled. In general, in the Nth week, N friends dropped out and the remaining
 *      number doubled. Write a program that computes and displays the number of
 *      friends each week. The program should continue until the count exceeds
 *      Dunbar's number. Dunbar's number is a rough estimate of the maximum size of
 *      a cohesive social group in which each member knows every other member and
 *      how they relate to one another. Its approximate value is 150.
 */

int main(void)
{
    int friends = INITIAL;
    int weeks = 1;
    
    printf(" weeks friends\n");
    while (friends <= DUNBAR){
        friends -= weeks;
        friends *= 2;
        printf("%5d %7d\n", weeks, friends);
        weeks++;
    }
    
}

