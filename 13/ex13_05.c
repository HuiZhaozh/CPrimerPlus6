#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
void append(FILE * source, FILE * dest);
/*
 * 作者： Andy
 * 日期： 2021-10-11
 * 页码： 第437页
 * 目的： Modify the program in Listing 13.5 so that it uses a command-line interface instead of an
 *       interactive interface.
 */
int main(int argc, char * argv[])
{
    FILE *fa, *fs;
    int files = 0;          // 附加文件的个數
    int ch;
    int file_index;

    if(argc < 3){
        printf("Usage: %s filename_1 ... filename_n.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fa = fopen(argv[1], "a+")) == NULL){
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0){
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }

    for ( file_index = 2; file_index < argc; file_index++){
        if(strcmp(argv[1], argv[file_index]) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if((fs = fopen(argv[file_index], "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", argv[file_index]);
        else{
            if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0){
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if(ferror(fs) != 0)
                fprintf(stderr, "Error in reading file %s\n", argv[file_index]);
            if(ferror(fa) != 0)
                fprintf(stderr, "Error in writing file %s\n", argv[1]);
            fclose(fs);
            files++;
            printf("File %s appended!\n", argv[file_index]);
        }
    }
    
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    fclose(fa);

    return 0;
}

void append(FILE * source, FILE * dest){
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}

