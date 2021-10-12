#include <stdio.h>
#include <stdlib.h>
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Write a program that takes as command-line arguments a character and zero or more
 *       filenames. If no arguments follow the character, have the program read the standard
 *       input. Otherwise, have it open each file in turn and report how many times the character
 *       appears in each file. The filename and the character itself should be reported along with
 *       the count. Include error-checking to see whether the number of arguments is correct and
 *       whether the files can be opened. If a file can't be opened, have the program report that
 *       fact and go on to the next file.
 */

int main(int argc, char * argv[])
{
    FILE * fp;
    int ch;
    int file_index;
    int count = 0;
    
    if(argc < 3){
        fprintf(stderr, "%s charactr filename[s]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for ( file_index = 2; file_index < argc; file_index++){
        if((fp = fopen(argv[file_index], "r")) == NULL){
            fprintf(stderr, "Can't open file %s.\n", argv[file_index]);
        }else{
            // 成功打开了文件
            if(ferror(fp) != 0)
                fprintf(stderr, "Error in reading file %s\n", argv[file_index]);
            while ((ch = getc(fp)) != EOF){
                if(ch == argv[1][0])
                    count++;
            }
            printf("The character %s has appeared in file %s for %d times.\n", argv[1], argv[file_index], count);
            count = 0;
            fclose(fp);
        }
    }
    
    return 0;
}

