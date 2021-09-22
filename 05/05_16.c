#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第129页
 * 目的： 本章最后一个例子 --- 综合使用本章学过的几个概念
 */
const int S_PER_M = 60;             // 1分钟的秒数
const int S_PER_H = 3600;           // 1小时的秒数
const double M_PER_K = 0.62137;     // 1公里的英里数
int main(void)
{
    double distk, distm;            //跑过的距离(分别以公里和英里为单位)
    double rate;                    //平均速度(以英里/小时为单位)
    int min, sec;                   //跑步用时单位：分钟、秒
    int time;                       //跑步用时单位：秒
    double mtime;                   //跑1英里所有的时间(单位为秒)
    int mmin, msec;                 //跑1英里所有的时间(单位为分钟、秒)

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometer, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;
    distm = M_PER_K * distk;
    rate = distm / time * S_PER_H;
    mtime = (double)time /distm;
    mmin = (int)mtime / S_PER_M;
    msec = (int)mtime % S_PER_M;

    printf("You ran %1.2f km(%1.2f miles) in %d min, %d sec.\n",
            distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);
    return 0;
}