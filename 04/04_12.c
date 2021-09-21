#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第088页
 * 目的： printf中混淆整型数和浮点数，结果很奇怪
 */

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

    return 0;
}

/*
 * 经验总结
 *   float类型作为printf参数时，自动转换为double
 */