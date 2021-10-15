// 头文件
#ifndef ANDY_16_10_h
#define ANDY_16_10_h

#define SLEN 32

struct  name_ct{
    char first[SLEN];
    char last[SLEN];
};

typedef struct name_ct names;

void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif