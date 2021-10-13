#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10              // 书籍的最大数量
/*
 * 作者： Andy
 * 日期： 2021-10-13
 * 页码： 第468页
 * 目的： 保存结构到文件
 */
char * s_gets(char * st, int n);
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if((pbooks = fopen("book.dat", "a+b")) == NULL){
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    rewind(pbooks);
    while (count<MAXBKS && fread(&library[count], size, 1, pbooks)==1){
        if(count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;                  // 已读结构的数量
    if(count == MAXBKS){
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    
    puts("Please add new book titles.");
    printf("Press [enter] ath the start of a line to stop.\n");
    while (count<MAXBKS && s_gets(library[count].title, MAXTITL)!= NULL && library[count].title[0]!='\0'){
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if(count > 0){
        printf("Here is the list of your books:\n");
        for ( index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }else
        printf("No books? Too bad.\n");
    puts("Bye!");
    fclose(pbooks);
    
    return 0;
}

char * s_gets(char * st, int n){
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val){
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}