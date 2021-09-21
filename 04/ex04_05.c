#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第101页
 * 目的： 
 *     Write a program that requests the download speed in megabits per second (Mbs) and
 *     the size of a file in megabytes (MB). The program should calculate the download time
 *     for the file. Note that in this context one byte is eight bits. Use type float, and use /
 *     for division. The program should report all three values (download speed, file size, and
 *     download time) showing two digits to the right of the decimal point, as in the following:
           At 18.12 megabits per second, a file of 2.20 megabytes
           downloads in 0.97 seconds.
 */

int main(void)
{
    float Mbs, MB, MBs;

    printf("Please enter the downloaded speed in megabits per second:\n");
    scanf("%f", &Mbs);
    printf("Please enter the size of a file in megabytes:\n");
    scanf("%f", &MB);

    MBs = Mbs / 8;
    printf("At %.2f megabytes per second, a file of %.2f megabytes\n"
           "downloads in %.2f seconds.\n", Mbs, MB, MB / MBs);
    return 0;
}

