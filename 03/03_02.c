#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第045页
 * 目的： 演示printf的一些特性
 */

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);                 //遗漏了两个参数
    return 0;
}

/*
 * 经验总结
 *   printf 和 scanf函数带有可变长参数，所以出现转换说明符和待打印(读取)变量数目不一致情况时，编译器爱莫能助
 *   只能有程序员自己确保数目配对问题
*/