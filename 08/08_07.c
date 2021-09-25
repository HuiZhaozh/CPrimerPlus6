#include <stdio.h>
#include <stdbool.h>
long get_long(void);            // 获取一个整数
bool bad_limits(long begin, long end, long low, long high);
double sum_squares(long a, long b);
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第232页
 * 目的： 输入验证
 */

int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("This program computers the sum of the squares of "
           "integers in a range.\nThe lower bound should not "
           "be less than -10000000L and\nthe upper bound "
           "should not be more than +10000000L.\nEnter the "
           "limits (enter 0 for both limits to quit):\n"
           "lower limits: ");
    start = get_long();
    printf("upper limits: ");
    stop = get_long();

    while (start!=0 || stop!=0){
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else{
            answer = sum_squares(start, stop);
            printf("The sum of squares of the integers ");
            printf("from %ld to %ld is %g\n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both limits to quit):\n"
           "lower limits: ");
        start = get_long();
        printf("upper limits: ");
        stop = get_long();  
    }
    printf("Done.\n");

    return 0;
}

long get_long(void){
    long input;
    char ch;

    while (scanf("%ld", &input)!=1 ){
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }
    return input;
}

bool bad_limits(long begin, long end, long low, long high){
    bool not_good = false;
    if(begin > end){
        printf("%ld isn't smaller than %ld.\n", begin, end);
        not_good = true;
    }
    if(begin<low || end<low){
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }
    if (begin>high || end>high){
        printf("Values must be %ld or smaller.\n", high);
        not_good = true;
    }
    return not_good;
}

double sum_squares(long a, long b){
    double total = 0;
    long i;

    for ( i = a; i <= b; i++)
        total += (double)i*(double)i;
    return total;
}