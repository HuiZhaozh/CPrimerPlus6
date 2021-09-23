#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第148页
 * 目的： 根据用户从键盘输入的整数进行求和 --- 使用了_Bool类型
 */

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be sumed ");
    printf("(q to quit): ");
    input_is_good = scanf("%ld", &num) == 1;
    while (input_is_good){                     // 错误的将 == 换成了 = 
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
