// 头文件
#include <string.h>
#ifndef SLEN
#define SLEN 32
#endif

struct name_ct {
    char first[SLEN];
    char last[SLEN];
};

typedef struct name_ct names;

// 函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);
/*
 * 经验总结
 *   头文件常包含的内容
 *   (1) 常量定义       (2) 函数声明        (3) 结构、类型的定义        (4) 包含其他头文件
 */
