#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第079页
 * 目的： 使用limits.h和float.h中的符号常量
 */

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    
    return 0;
}