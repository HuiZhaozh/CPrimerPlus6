#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第433页
 * 目的： 用二进制I/O进行随机访问
 */

int main(void)
{
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE * iofile;

    for ( i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0*i + 1.0/(i+1);
    
    // 尝试打开文件
    if((iofile = fopen(file, "wb")) == NULL){
        fprintf(stderr, "Could not open %s for output.\n", file);
        exit(EXIT_FAILURE);
    }
    fwrite(numbers, sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if((iofile = fopen(file, "rb")) == NULL){
        fprintf(stderr, "Could not open %s for random access.\n", file);
        exit(EXIT_FAILURE);
    }
    printf("Enter an index in the range 0 ~ %d\n", ARSIZE - 1);
    while (scanf("%d", &i)==1 && i>=0 && i<ARSIZE){
        pos = (long)i*sizeof(long);
        fseek(iofile, pos, SEEK_SET);           // 将文件位置指示器正确定位
        fread(&value, sizeof(double), 1, iofile);
        printf("The value there is %f.\n", value);
        printf("Enter index (out of range to quit):\n");
    }
    fclose(iofile);
    printf("Bye!\n");

    return 0;
}