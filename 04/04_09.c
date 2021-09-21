#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第086页
 * 目的： printf中一些格式标记
 */

int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    return 0;
}

/*
 * 经验总结
 *   printf的flag部分的空格和精度同时出现时
 *   整数会忽略空格；浮点数同时考虑两者
 */