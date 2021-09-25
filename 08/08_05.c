#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-25
 * 页码： 第228页
 * 目的： 混合数值和字符输入可能遇到的问题
 */
void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;

    printf("Enter a character and two integers:\n");
    while ( (ch = getchar())!= '\n'){
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
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