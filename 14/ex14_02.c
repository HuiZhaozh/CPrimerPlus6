#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第490页
 * 目的： Writing a program that prompts the user to enter the day, month, and year. The month can be a month
 *       number, a month name, or a month abbreviation. The program then should return the total number of days
 *       in the year up through the given day. (Do take leap years into account.)
 */
struct month{
    char name[10];
    char abbrev[4];
    int days;
    int monum;
};

const struct month months[12] = {
    {"January", "Jan", 31, 1},
    {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}
};

const struct month months_leap[12] = {
    {"January", "Jan", 31, 1},
    {"February", "Feb", 29, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}
};

int days(int day, char * mon);          // 计算平年
int days_leap(int day, char * mon);     // 计算闰年
bool is_leap(int year);                 // false:是平年(默认)  true:是闰年
int main(void)
{
    int day;
    char input[20];
    int year;
    int daytotal;
    int (*pf)(int day, char *mon);

    printf("Please enter the day: ");
    while (scanf("%d", &day) == 1){
        printf("Please enter the month: ");
        scanf("%s", input);
        printf("Please enter the year: ");
        scanf("%d", &year);
        // 下面4行纯属Andy本人想练习函数指针 --- 可以不用这么复杂
        if(is_leap(year))
            pf = days_leap;
        else
            pf = days;

        if( (daytotal = pf(day, input))> 0)
            printf("There are %d days through %s.\n", daytotal,
                    input);
        else
            printf("%s is not a valid input.\n", input);
        printf("Next day (q to quit): ");
    }
    puts("Bye!");
    
    return 0;
}

bool is_leap(int year){
    bool leap_year = false;
    if((year%4==0 && year%100!=0) || year%400==0)
        leap_year= true;
    return leap_year;
}

int days(int day, char * mon){
    int total = 0;
    int i;
    int monum = 0;
    if(isnumber(*mon)){
        // 输入的是月份号
        monum = atoi(mon);
    }

    for ( i = 0; i < 12; i++){
        if(strcasecmp(mon, months[i].name)==0 || strcasecmp(mon, months[i].abbrev)==0 || monum == months[i].monum){
            total += day;
            break;
        }
        total += months[i].days;
    }
    if(i >= 12)
        total = 0;
    return total;
}

int days_leap(int day, char * mon){
    int total = 0;
    int i;
    int monum = 0;
    if(isnumber(*mon)){
        // 输入的是月份号
        monum = atoi(mon);
    }

    for ( i = 0; i < 12; i++){
        total += months_leap[i].days;
        if(strcasecmp(mon, months_leap[i].name)==0 || strcasecmp(mon, months_leap[i].abbrev)==0 || monum == months_leap[i].monum){
            total += day;
            break;
        }
        total += months[i].days;
    }
    if(i >= 12)
        total = 0;
    return total;
}

