#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-23
 * 页码： 第158页
 * 目的： 使用for循环解决古代哲学家Zeno的悖论
 */

int main(void)
{
    int t_ct;           // 项计数
    double time, power_of_2;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1.0, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2){
        time += 1.0 / power_of_2;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }
    
    return 0;
}