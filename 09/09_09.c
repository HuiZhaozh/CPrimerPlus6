#include <stdio.h>
#include "09_11.h"
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第264页
 * 目的： 编写多源代码文件的程序
 *       09_09.c 包含main函数
 *       09_10.c 自定义函数
 *       09_11.h 符号常量和函数原型
 */

int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT){
        switch (code)
        {
        case 1:
            hotel_rate = HOTEL1;
            break;
        case 2:
            hotel_rate = HOTEL2;
            break;
        case 3:
            hotel_rate = HOTEL3;
            break;
        case 4:
            hotel_rate = HOTEL4;
            break;
        default:
            hotel_rate = 0.0;
            printf("Oops!\n");
            break;
        }

        nights = get_nights();
        show_price(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");

    return 0;
}