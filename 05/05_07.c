#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第112页
 * 目的： 优先级和结合律
 */

int main(void)
{
    int top, socre;

    top = socre = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, socre);
    return 0;
}

/*
 * 经验总结
 *   一个运算对象同时参与了两个运算符，若
 *   (1) 运算符优先级不同，则使用优先级规则
 *   (2) 运算符优先级相同，则使用结合律规则
*/