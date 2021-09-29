#include <stdio.h>
#define ROWS 3
#define COLS 4
/*
 * 作者： Andy
 * 日期： 2021-09-29
 * 页码： 第310页
 * 目的： 变长数组
 */
int sum2d(int rows, int cols, int ar[rows][cols]);          // C99新特性 —— 变长数组


int main(void)
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };
    int more_junk[ROWS-1][COLS+2]={
        {20, 30, 40, 50, 60, 70},
        {5, 6, 7, 8, 9, 10}
    };
    int rs = 3;
    int cs = 10;
    int varr[rs][cs];
    int i, j;

    for(i=0; i<rs; i++)
        for(j=0; j<cs; j++)
            varr[i][j] = i*j+j;
    
    printf("3 X 4 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));
    
    printf("2 X 6 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS-1, COLS+2, more_junk));

    printf("3 X 10 array\n");
    printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));

    return 0;
}

int sum2d(int rows, int cols, int ar[rows][cols]){
    int r;
    int c;
    int tot = 0;

    for(r=0; r<rows; r++)
        for(c=0; c<cols; c++)
            tot += ar[r][c];
    return tot;
}

/*
 * 经验总结
 *   (1) 变长数组的变 --- 可以使用变量作为数组维度
 *   (2) 传统/变长      形参形式                                特点
 *       传统          (int ar[][M]...[N], rows)              只能处理每个元素是int [M]...[N]类型的数组
 *       变长          (int x1, ... int xn, int ar[x1]..[xn]) 可以处理元素int [x1]...[xn]类型的数组
 *   (3) 变长数组要点
 *       只能是定义在块作用域的自动存储类别;不能初始化
 */