#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-22
 * 页码： 第125页
 * 目的： 自动类型转换
 */

int main(void)
{
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'C';
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);

    ch  = ch + 1;
    i = f1 + 2 * ch;
    f1 = 2.0 * ch + i;
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);

    ch = 1107;
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);
    return 0;
}

/*
 * 经验总结
 *   (1) 表达式中，unsigned和signed的char、short全部转换成int
 *       如果short等于int大小，则unsigned short转换为unsigned int
 *   (2) float类型不会自动转换为double类型【特别强调】
 *       但如果函数未使用函数原型，如printf函数，float类型的参数仍自动转换成double类型
 *   (3) 赋值表达式中，计算的最终结果会被转换为被赋值变量的类型
*/
