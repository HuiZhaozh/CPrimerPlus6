#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-07
 * 页码： 第388页
 * 目的： 使用5种存储类别（需和12_05.c一起编译）
 */

extern int count;           // 引用式声明
static int total = 0;       // 对应(5)

void accumulate(int k);

void accumulate(int k){
    static int subtotal = 0;    // 对应(3)

    if(k <= 0){
        printf("Loop cycle: %d\n", count);
        printf("subtotal: %d; total = %d\n", subtotal, total);
        subtotal = 0;
    }else{
        subtotal += k;
        total += k;
    }
}