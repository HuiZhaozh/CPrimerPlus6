#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第229页
 * 目的： 08_05.c完善之后的源代码
 */
void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;

    printf("Enter a character and two integers:\n");
    while ( (ch = getchar())!= '\n'){
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        // 下面两行跳过一轮输入结束与下一轮输入开始前所有的字符(包括所有的空白符)
        while (getchar() != '\n')
            continue;   
        printf("Enter another character and two integers:\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    
    return 0;
}

void display(char cr, int lines, int width){
    int row, col;
    for ( row = 1; row <= lines; row++){
        for ( col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}