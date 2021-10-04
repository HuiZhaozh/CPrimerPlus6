/*
 * 作者： Andy
 * 日期： 2021-10-01
 * 页码： 第336页
 * 目的： 自定义替代gets_s的函数s_gets函数
 *       (1) 读取整行输入，并用'\0'代替'\n'
 *       (2) 丢弃没有被读取的其他字符
 *   
 */
#include <stdio.h>
char * s_gets(char * st, int n){
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val){
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}