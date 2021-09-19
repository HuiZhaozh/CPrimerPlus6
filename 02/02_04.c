#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-19
 * 页码： 第032页
 * 目的： 语法错误
 * 
 * 源码:    
    int main(void)
    {
        int n, int n2, int n3;

        /* 该程序有多处错误
        n = 5;
        n2 = n * n;
        n3 = n2 * n2;
        printf("n = %d, n squared = %d, n cube = %d\n", n, n2, n3)
        return 0;
    }
 */

int main(void)
{
    int n, n2, n3;

    /* 所有语法错误已改正 */
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cube = %d\n", n, n2, n3);
    return 0;
}