#include <stdio.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30
#define LEVEL 10
/*
 * 作者： Andy
 * 日期： 2021-10-12
 * 页码： 第438页
 * 目的： Do Programming Exercise 12, but use variable-length arrays (VLAs) instead of standard arrays.
 */

void init(int rows, int cols, char arr[rows][cols], char ch);
void make_pic(int rows, int cols, int data[rows][cols], char pic[rows][cols]);

const char trans[LEVEL+1] = " .':~*=&%@";           // 最后一个字符是\0

int main(void)
{
    int pic_in[ROWS][COLS];
    char pic_out[ROWS][COLS];
    char file_name[81];
    FILE * fp;
    int row, col;

    init(ROWS, COLS, pic_out, '$');
    printf("Enter the name of file: ");
    scanf("%80s", file_name);
    if((fp = fopen(file_name, "r")) == NULL){
        fprintf(stderr, "Could not open data file.\n");
        exit(EXIT_FAILURE);
    }
    for ( row = 0; row < ROWS; row++){
        for ( col = 0; col < COLS; col++){
            fscanf(fp, "%d", &pic_in[row][col]);
        }
    }

    make_pic(ROWS, COLS, pic_in, pic_out);
    for ( row = 0; row < ROWS; row++)
    {
        for ( col = 0; col < COLS; col++){
            putchar(pic_out[row][col]);
        }
        putchar('\n');
    }
    puts("Done.");
    
    return 0;
}

void init(int rows, int cols, char arr[rows][cols], char ch){
    int r, c;
    for ( r = 0; r < ROWS; r++)
        for ( c = 0; c < COLS; c++)
            arr[r][c] = ch;
}

void make_pic(int rows, int cols, int data[rows][cols], char pic[rows][cols]){
    int row, col;
    for ( row = 0; row < rows; row++)
        for ( col = 0; col < cols; col++)
            pic[row][col] = trans[data[row][col]];
}