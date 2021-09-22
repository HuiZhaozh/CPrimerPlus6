#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第134页
 * 目的： 
 *     Write a program that asks the user to enter a height in centimeters and
 *     then displays the height in centimeters and in feet and inches. Fractional
 *     centimeters and inches should be allowed, and the program should allow the
 *     user to continue entering heights until a nonpositive value is entered. A
 *     sample run should look like this:
           Enter a height in centimeters: 182
           182.0 cm = 5 feet, 11.7 inches
           Enter a height in centimeters (<=0 to quit): 168.7
           168.0 cm = 5 feet, 6.4 inches
           Enter a height in centimeters (<=0 to quit): 0
           bye
 */

int main(void)
{
    const double CENTIMETERS_PER_FOOT = 30.48;
    const double CENTIMETERS_PER_INCH = 2.54;
    double cm;
    double inches;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%lf", &cm);
    while (cm > 0){
        feet = cm / CENTIMETERS_PER_FOOT;
        inches = (cm - feet * CENTIMETERS_PER_FOOT) / CENTIMETERS_PER_INCH;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("Enter a height in centimeters (<= 0 to quit): ");
        scanf("%lf", &cm);
    }
    printf("bye\n");
    return 0;
}



