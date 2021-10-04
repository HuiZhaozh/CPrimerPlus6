#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
/*
 * 作者： Andy
 * 日期： 2021-10-02
 * 页码： 第345页
 * 目的： strncat函数
 *       本.c文件需要和11_10.c联合编译
 */
char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favourite flowers?");
    s_gets(flower, SIZE);
    if (strlen(flower)+strlen(addon)+1 <= SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favourite bug?");
    s_gets(bug, BUGSIZE);
    available = BUGSIZE-strlen(bug)-1;
    strncat(bug, addon, available);
    puts(bug);
    
    return 0;
}

/*
 * 经验总结
 *   strncat第三个参数指定要复制的最大字符数，意味着亮点
 *   (1) 复制的最大字符数并不将\0计算在内
 *   (2) 程序员要自己计算并通过第三个参数指定能复制的字符数，以便数组留下至少一个字符空间存放\0
 * 
 *   strcat() gets() 在输入数据过长时，都会造成缓冲区异常
*/