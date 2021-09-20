#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第068页
 * 目的： 
 * Find out what your system does with integer overflow, floating-point overflow,
 * and floating-point underflow by using the experimental approach; that is, write programs 
 * having these problems. 
 * I've checked limits.h and float.h to get guidance on the largest and smallest values.
 */
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Maximun int value on this system = %d\n", INT_MAX);
    printf("Maximum float value on this system = %e\n", FLT_MAX);
    printf("Minimum float value on this system = %e\n", FLT_MIN);
    printf("Integer overflow: %d +1 = %d\n", INT_MAX, INT_MAX + 1);
    // C99规定了浮点数上溢为inf
    printf("Floating-point overflow: %e * 10 = %e\n", FLT_MAX, FLT_MAX * 10);
    // 浮点数下溢会从尾数部分借位
    printf("Floating-point underflow: %e / 10 = %e\n", FLT_MIN, FLT_MIN / 10);
    return 0;
}