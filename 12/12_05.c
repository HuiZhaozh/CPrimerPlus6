#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第387页
 * 目的： 使用5种存储类别（需和12_06.c一起编译）
 *              声明方式        作用域      链接属性    存储方式
 *       (1) 块内+auto可省      块作用域     无          自动
 *       (2) 块内+register     块作用域     无          自动 
 *       (3) 块内+static       块作用域     无          静态
 *       (4) 所有函数外         文件作用域   外部链接     静态
 *       (5) 所有函数外+static  文件作用域   内部链接     静态
 */

void report_count(void);
void accumulate(int k);
int count = 0;          // 对应(4)

int main(void)
{
    int value;          // 对应(1)
    register int i;     // 对应(2)

    printf("Enter a positive integer (0 to quit): ");
    while (scanf("%d", &value)==1 && value>0){
        ++count;
        for ( i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer (0 to quit): ");  
    }
    report_count();
    
    return 0;
}

void report_count(void){
    printf("Loop executed %d times.\n", count);
}