#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ROWS 20
#define COLS 30
#define LEVEL 10
/*
 * 作者： Andy
 * 日期： 2021-10-12
 * 页码： 第438页
 * 目的： Digital images, particularly those radioed back from spacecraft, may have glitches. Add a
 *       de-glitching function to programming exercise 12. It should compare each value to its immediate
 *       neighbors to the left and right, above and below. If the value differs by more than 1 from each
 *       of its neighbors, replace the value with the average of the neighboring values. You should round
 *       the average to the nearest integer value. Note that the points along the boundaries have fewer
 *       than four neighbors, so they require special handling.
 */
void init(char arr[][COLS], char ch);
void make_pic(int data[][COLS], char pic[][COLS], int rows);
void de_glitch(int data[][COLS], int rows);         // 消除失真的函数

const char trans[LEVEL+1] = " .':~*=&%@";           // 最后一个字符是\0
int main(void)
{
    int pic_in[ROWS][COLS];
    char pic_out[ROWS][COLS];
    char file_name[81];
    FILE * fp;
    int row, col;

    init(pic_out, '$');
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
    de_glitch(pic_in, ROWS);
    make_pic(pic_in, pic_out, ROWS);
    
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

void init(char arr[][COLS], char ch){
    int r, c;
    for ( r = 0; r < ROWS; r++){
        for ( c = 0; c < COLS; c++)
            arr[r][c] = ch;
    }
}

void make_pic(int data[][COLS], char pic[][COLS], int rows){
    int row, col;
    for ( row = 0; row < rows; row++)
        for ( col = 0; col < COLS; col++)
            pic[row][col] = trans[data[row][col]];
}

void de_glitch(int data[][COLS], int rows){
    int r, c;
    double total;
    int count;

    for ( r = 0; r < rows; r++){
        for ( c = 0; c < COLS; c++){
            total = 0;
            count = 0;
            // 该函数非常可怕的处理过程来了
            if(r+1 < ROWS){
                // 该元素不在最下面一行
                if(abs(data[r][c] - data[r+1][c]) <= 1)
                    continue;
                total += data[r+1][c];
                count++;
            }
            if(c+1 < COLS){
                // 该元素不在最右一列
                if(abs(data[r][c] - data[r][c+1]) <= 1)
                    continue;
                total += data[r+1][c];
                count++;
            }
            if(r>0){
                // 该元素不在最上一行
                if(abs(data[r][c] - data[r-1][c]) <= 1)
                    continue;
                total += data[r+1][c];
                count++;
            }
            if(c>0){
                // 该元素不在最左一列
                if(abs(data[r][c] - data[r][c-1]) <= 1)
                    continue;
                total += data[r+1][c];
                count++;
            }
            data[r][c] = (int)nearbyint(total / count);
            // 该函数非常可怕的处理过程结束了
        }
    }
}
