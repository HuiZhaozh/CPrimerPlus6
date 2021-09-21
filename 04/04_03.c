#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
/*
 * 作者： Andy
 * 日期： 2021-09-20
 * 页码： 第074页
 * 目的： 使用strlen函数
 */

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
            strlen(name), sizeof(name));
    printf("The phrase of praise has %zd letters ", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof(PRAISE));

    return 0;
}

/*
 * 经验总结
 *   strlen函数返回字符串的实际长度(不包括最后的null字符)
 */