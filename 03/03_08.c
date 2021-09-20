#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第062页
 * 目的： 打印当前系统各数据类型所占字节数
 */

int main(void)
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));

    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));


}

/*
 * 经验总结
 *   (1) 不同系统，可能使用%u 或 %lu匹配 sizeof()的返回类型
 *   (2) 计算机发展的今天，最好使用%zd匹配 sizeof()的返回类型
 */