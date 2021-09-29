#include <stdio.h>
#define MONTHS 12
#define YEARS 5
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第318页
 * 目的： Rewrite the rain program in Listing 10.7 so that the main tasks are performed by
 *       functions instead of in main().
 */
double yearly_total(const double rain[][MONTHS], int years);
void monthly_average(const double rain[][MONTHS], int years);

int main(void)
{
    const double rain[YEARS][MONTHS] = {
			{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
			{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
			{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
			{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
			{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};
    int year, month;
    double year_average;

    printf(" YEAR RAINFALL(inches)\n");
    year_average = yearly_total(rain, YEARS) / YEARS;
    printf("\nThe yearly average is %.1f inches.\n", year_average);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    monthly_average(rain, YEARS);
    printf("\n");
    return 0;
}

double yearly_total(const double rain[][MONTHS], int years){
    int year, month;
    double subtot, total;
    for(year = 0, total =0; year < years; year++){
        for(month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];                    // subtot为每年总降水量
        printf("%5d %15.1f\n", 2010+year, subtot);
        total += subtot;
    }
    return total;
}

void monthly_average(const double rain[][MONTHS], int years){
    int year, month;
    double subtot;
    for(month = 0; month < MONTHS; month++){
        for(year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];                    // subtot为某月5年总降水量 
        printf("%4.1f", subtot / YEARS);
    }
}

