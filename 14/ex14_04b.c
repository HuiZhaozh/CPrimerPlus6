#include <stdio.h>
#include <string.h>
#define MAX 20
#define N 5
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第490页
 * 目的： Write a program that creates a structure template with two members according to the following criteria:
     a. The first member is a social security number. The second number is a structure with three members. 
        Its first member contains a first name, its second member contains a middle name, and its final member
        contains a last name. Create and initialize an array of five such structures. Have the program print the data
        in this format:
        Dribble, Flossie M. -- 302039823
 * Only the initial letter of the middle name is printed, and a period is added. Neither the initial (of course) nor
 * the period should be printed is the middle name member is empty. Write a function to do the printing; pass the
 * structure array to the function.
 *   b. Modify part a. by passing the structure value instead of the address.
 */

struct name {
    char first_name[MAX];
    char middle_name[MAX];
    char last_name[MAX];
};

struct identity {
    char number[MAX];
    struct name handle;
};

void print_identity(char first[], char middle[], char last[], char number[]);

int main(void)
{
    struct identity array[N] = {
        {"0710220917", {"Flossie", "Malan", "Dribble"}},
        {"0710220918", {"Long", "Jin", "Xu"}},
        {"0710220919", {"Long", "", "Xu"}},
        {"0710220920", {"Shang", "Ni", "Lian"}},
        {"0710220921", {"Prata", "Dennis", "Stephen"}}
    };
    int i;

    for ( i = 0; i < N; i++)
        print_identity(array[i].handle.first_name, array[i].handle.middle_name, 
                    array[i].handle.last_name, array[i].number);
    return 0;
}

void print_identity(char first[], char middle[], char last[], char number[]){
    int index;
    
    if(strcmp(middle, ""))
        printf("%s, %s %c. -- %s\n", first, last, middle[0], number);
    else
        printf("%s, %s -- %s\n", first, last, number);
}
