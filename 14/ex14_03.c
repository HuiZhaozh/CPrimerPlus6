#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100              // 书籍的最大数量
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第490页
 * 目的： Revise the book-listing program in Listing 14.2 so that it prints the book descriptions in the order entered,
 *       then alphabetized by title, and then in order of increased value.
 */
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char * s_gets(char * st, int n);
void sort_by_title(struct book * pb[], int n);
void sort_by_value(struct book * pb[], int n);
void show_struct(struct book * pb[], int n);

int main(void)
{
    struct book library[MAXBKS];
    struct book * pbk[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title. Press [enter] ath the start of a line to stop.\n");
    while (count<MAXBKS && s_gets(library[count].title, MAXTITL)!= NULL && library[count].title[0]!='\0'){
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count].value);
        pbk[count] = &library[count];
        count++;
        while (getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if(count > 0){
        printf("Here is the list of your books:\n");
        show_struct(pbk, count);
        printf("Here is the list of your books sorted by title:\n");
        sort_by_title(pbk, count);
        show_struct(pbk, count);
        printf("Here is the list of your books sorted by value:\n");
        sort_by_value(pbk, count);
        show_struct(pbk, count);

    }else
        printf("No books? Too bad.\n");

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

void sort_by_title(struct book * pb[], int n){
    int i, j;
    struct book * temp;

    for ( i = 0; i < n-1; i++)
        for ( j = i+1; j < n; j++)
            if(strcmp(pb[i]->title, pb[j]->title) > 0){
                temp = pb[i];
                pb[i] = pb[j];
                pb[j] = temp;
            }
}

void sort_by_value(struct book * pb[], int n){
    int i, j;
    struct book * temp;

    for ( i = 0; i < n-1; i++)
        for ( j = i+1; j < n; j++)
            if(pb[i]->value > pb[j]->value){
                temp = pb[i];
                pb[i] = pb[j];
                pb[j] = temp;
            }
}

void show_struct(struct book * pb[], int n){
    int index;
    for ( index = 0; index < n; index++){
            printf("%-40sby %-40s: $%.2f\n", pb[index]->title, pb[index]->author, pb[index]->value);
    }
    putchar('\n');
}