#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第049页
 * 目的： 打印各种整型
 */

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    char t = '\xff';
    
    /*下面两行并不是书中代码，是作者为了验证得出第1条经验*/
    short test = 0xffff;
    printf("%hd %hx %ho %hu\n", test, test, test, test);
    /*下面一行并不是书中代码，是作者为了验证得出第2条经验*/
    printf("%xu %ux\n", test, test);

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);                     //short(或char)作为实参传递，一律转换成int
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    return 0;
}

/*
 * 经验总结
 *   (1) 0x或者0开头的字面值常量表示每个二进制位的数字情况，具体数值的解释，取决于使用的转换说明符
 *   (2) 说明符中不可能出现x(或o)和u搭配的组合，编译器会把最后的当成普通字符处理
 *   (3) 说明符h (默认整型) l ll后可搭d u说明对应长度下的有符号和无符号类型
 *                               搭x o说明对应二进制位的状态而已
 */