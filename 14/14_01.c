#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31
/*
 * 作者： Andy
 * 日期： 2021-10-12
 * 页码： 第439页
 * 目的： 创建图书目录
 */
char * s_gets(char * st, int n);
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;        // library是一个变量

    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);

    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ( $%.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");
    
    return 0;
}

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


