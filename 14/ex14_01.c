#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第490页
 * 目的： Redo Review Question 5, but make the argument the spelled-out name of the month instead of the month number. 
 *       (Don't forget about strcmp().) Test the function in a simple program.
 */

struct month{
    char name[10];
    char abbrev[4];
    int days;
};

const struct month months[12] = {
    {"January", "Jan", 31},
    {"February", "Feb", 28},
    {"March", "Mar", 31},
    {"April", "Apr", 30},
    {"May", "May", 31},
    {"June", "Jun", 30},
    {"July", "Jul", 31},
    {"August", "Aug", 31},
    {"September", "Sep", 30},
    {"October", "Oct", 31},
    {"November", "Nov", 30},
    {"December", "Dec", 31}
};

int days(char * mon);

int main(void)
{
    char input[10];
    int day_total;

    printf("Enter the name of a month: ");
    while (scanf("%s", input) == 1 && input[0] != 'q'){
        day_total = days(input);
        if(day_total > 0)
            printf("There are %d days through %s.\n", day_total,
                    input);
        else
            printf("%s is not a valid input.\n", input);
        printf("Next month (q to quit): ");
    }
    puts("Bye!");

    return 0;
}

int days(char * mon){
    int total = 0;
    int i;

    for ( i = 0; i < 12; i++){
        total += months[i].days;
        if(strcasecmp(mon, months[i].name) == 0)
            break;
    }
    if(i >= 12)
        total = 0;
    return total;
}