#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define LEN 80
#define MAX 10
/*
 * 作者： Andy
 * 日期： 2021-10-06
 * 页码： 第372页
 * 目的： Write a program that reads in up to 10 strings or to EOF, whichever comes first. Have it
 *       offer the user a menu with five choices: 
 *         (1) print the original list of strings
 *         (2) print the strings in ASCII collating sequence
 *         (3) print the strings in order of increasing length
 *         (4) print the strings in order of the length of the first word in the string
 *         (5) quit
 *       Have the menu recycle until the user enters the quit request. The program, of course, 
 *       should actually perform the promised tasks.
 *       本.c文件需要和11_10.c联合编译
 */

char * s_gets(char * st, int n);
void show_menu(void);
int get_choice(void);
void print_ori(char * s[], int cnt);
void print_ascii(char * s[], int cnt);
void print_length(char * s[], int cnt);
void print_length_firstword(char * s[], int cnt);
int length_firstword(char * s);
int main(void)
{
    char str[MAX][LEN];
    char * str_ptr[MAX];
    int cnt = 0;
    int choice;
    int i;

    for ( i = 0; i < MAX; i++)
        str_ptr[i] = str[i];
    
    puts("Enter up to 10 strings (or Press ENTER to finish): ");
    while (s_gets(str[cnt], LEN) && str[cnt][0]!='\0'){
        cnt++;
        if (cnt == 10)
            break;    
    }

    while (true){
        show_menu();
        choice = get_choice();
        switch (choice)
        {
        case 1:
            print_ori(str_ptr, cnt);
            break;
        case 2:
            print_ascii(str_ptr, cnt);
            break;
        case 3:
            print_length(str_ptr, cnt);
            break;
        case 4:
            print_length_firstword(str_ptr, cnt);
            break;
        case 5:
            puts("quit program!");
            return 0;
        default:
            break;
        }
    }    
    return 0;
}

void show_menu(void){
    puts("(1) print the original list of strings");
    puts("(2) print the strings in ASCII collating sequence");
    puts("(3) print the strings in order of increasing length");
    puts("(4) print the strings in order of the length of the first word in the string");
    puts("(5) quit");
}

int get_choice(void){
    int choice;
    printf("Please make a choice: ");
    while (scanf("%d", &choice)!=1 || (choice>5 || choice < 1)){
        while (getchar() != '\n')
            continue;
        printf("make a choice (only with 1 ~ 5): ");
    }
    return choice;
}

void print_ori(char * s[], int cnt){
    for (int i = 0; i < cnt; i++){
        puts(*(s+i));
    }
}

void print_ascii(char * s[], int cnt){
    char * temp;
    for (int i = 0; i < cnt-1; i++){
        for (int j = i+1; j < cnt; j++){
            if(strcmp(s[i], s[j]) > 0){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < cnt; i++)
        puts(*(s+i));
}

void print_length(char * s[], int cnt){
    char * temp;
    for (int i = 0; i < cnt-1; i++){
        for (int j = i+1; j < cnt; j++){
            if(strlen(s[i]) > strlen(s[j])){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }  
    }
    
    for (int i = 0; i < cnt; i++)
        puts(*(s+i));
}

void print_length_firstword(char * s[], int cnt){
    char * temp;
    for (int i = 0; i < cnt-1; i++){
        for (int j = i+1; j < cnt; j++){
            if (length_firstword(s[i]) > length_firstword(s[j])){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            } 
        }
    }
    for (int i = 0; i < cnt; i++)
        puts(*(s+i));
}

int length_firstword(char * s){
    int lenght = 0;
    while (!isspace(*s)){
        lenght++;
        s++;
    }
    return lenght;
}
