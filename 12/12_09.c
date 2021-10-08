#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第391页
 * 目的： 自定义随机数函数2（需和12_10.c一起编译）
 */
static unsigned long int next = 1;
// static修饰的文件作用域的变量，满足以下重要的两点
// (1) 只能本文件内部使用，其他文件无法使用
// (2) 种子需要借助上一个种子来生成，所以必须记住上一个种子 --- 静态存储

unsigned int rand1(void){
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65535) % 32768;
}

// 先定义种子，这样的随机数更真实
void srand1(unsigned int seed){
    next = seed;
}