#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第096页
 * 目的： scanf原理总结
 */

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%u", &width);
    printf("The number is : %*d:\n", width, number);
    printf("Now enter a width and a precisioin:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);

    return 0;
}

/*
 * 经验总结
 *   (1) 除%c外，scanf会忽略所有的前导空白符(空格、制表符、回车)
 *   (2) 遇到第1个非空白字符如果不合第1个转换说明符，读取出错，停止读取后续所有输入；否则开始读取
 *   (3) 第1个空白字符或者非法字符来临处停止读取，并把该字符放回输入流，等待下一次的读取
 *   (4) 格式字符串中空格表示跳过输入值之前所有空格
 */