#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Programs using command-line arguments rely on the user's memory of how to use them
 *       correctly. Rewrite the program in Listing 13.2 so that, instead of using command-line
 *       arguments, it prompts the user for the required information.
 */

int main(void)
{
    FILE *in, *out;
    int ch;
    char dest[LEN];             // 输出文件名 
    char source[LEN];
    int count = 0;

    printf("Please enter the source file name:");
    scanf("%s", source);
    if((in = fopen(source, "r")) == NULL){
        fprintf(stderr, "I couldn't open the file \"%s\"\n", source);
        exit(EXIT_FAILURE);
    }

    // 设置输出
    strncpy(dest, source, LEN-5);
    dest[LEN - 5] = '\0';       // .red需要4个字符，外加空字符
    strcat(dest, ".red");
    if((out = fopen(dest, "w")) == NULL){
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }

    // 拷贝数据
    while ((ch = getc(in)) != EOF){
        if (count++ % 3 == 0)
            putc(ch, out); 
    }

    if(fclose(in)!= 0|| fclose(out)!=0)
        fprintf(stderr, "Error in closing files\n");
    
    return 0;
}