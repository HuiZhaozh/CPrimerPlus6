#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第221页
 * 目的： 使用EOF作为文件结束标记
 */

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}

/*
 * 经验总结
 *   (1) C语言把I/O设备(键盘、屏幕等)和文件放在一个层次，即I/O设备也是文件
 *   (2) 重定向运算符 < 和 > 可以用其他文件代替键盘、屏幕等默认输入(或输出)文件，
 *       用stdin流和stdout流把程序和文件关联起来
 *   (3) 重定向运算符 < 和 > 只能关联程序和文件
 */