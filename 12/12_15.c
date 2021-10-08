#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 作者： Andy
 * 日期： 2021-10-08
 * 页码： 第401页
 * 目的： 内存的理想化模型 --- "自、动、静"
 */
int static_store = 30;
const char * pcg = "String Literal";

int main(void)
{
    int auto_store = 40;
    char auto_string[] = "Auto char Array";
    int * pi;
    char * pcl;

    pi = (int *)malloc(sizeof(int));
    *pi = 35;
    pcl = (char *)malloc(strlen("Dynamic String")+1);
    strcpy(pcl, "Dynamic String");

    printf("static_store: %d at %p\n", static_store, &static_store);
    printf("          %s: at %p\n", pcg, pcg);
    printf("_______________________________________\n");
    printf("auto_store  : %d at %p\n", auto_store, &auto_store);
    printf("          %s: at %p\n", auto_string, auto_string);
    printf("_______________________________________\n");
    printf("         *pi: %d at %p\n", *pi, pi);
    printf("          %s: at %p\n", pcl, pcl);
    printf("_______________________________________\n");
    printf("          %s: at %p\n", "Quoted String", "Quoted String");
    return 0;
}

/*
 * 经验总结
 *   (1) 静态内存 --- 存储静态存储期的变量或者字符串常量
 *   (2) 动态内存 --- malloc系列函数分配的内存
 *   (3) 自动内存 --- 存储自动变量(栈来管理这些内存)
 */
