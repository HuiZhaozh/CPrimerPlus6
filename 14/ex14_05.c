#include <stdio.h>
#include <string.h>
#define LEN 10
#define CSIZE 4
#define SCORES 3
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第490页
 * 目的： Write a program that fits the following recipe:
     a. Externally define a name structure template with two members: a string to hold the
        first name and a string to hold the second name.

     b. Externally define a student structure template with three members: a name
        structure, a grade array to hold three floating-point scores, and a variable to hold
        the average of those three scores.
     c. Have the main() function declare an array of CSIZE (with CSIZE = 4) student
        structures and initialize the name portions to name of your choice. Use functions
        to perform the tasks described in parts d., e., f., and g.

     d. Interactively acquire scores for each student by prompting the user with a student
        name and a request for scores. Place the scores in the grade array portion of the
        appropriate structure. The required looping can be done in main() or in the
        function, as you prefer.

     e. Calculate the average score value for each structures and assign it to the proper
        member.

     f. Print the information in each strcuture.

     g. Print the class average for each of the numeric structure members.
 */

struct name {
    char first[LEN];
    char last[LEN];
};

struct student {
    struct name handle;
    float scores[SCORES];
    float average;
};

void get_scores(struct student class[], int lim);
void make_average(struct student class[], int lim);
void show_class(const struct student class[], int lim);
void show_avg(const struct student class[], int lim);

int main(void)
{
    struct student class[CSIZE] = {
        { "Flip", "Snide"},
        { "Clare", "Voyans"},
        { "Bingo", "Higgs"},
        { "Fawn", "Hunter"}
    };

    get_scores(class, CSIZE);
    make_average(class, CSIZE);
    printf("%21s%7s%7s%7s%7s\n", "Student", "ZH", "Eng", "Mat", "Tot_avg");
    show_class(class, CSIZE);
    show_avg(class, CSIZE);
    return 0;
}

void get_scores(struct student class[], int lim){
    int i, j;

    for ( i = 0; i < lim; i++){
        printf("Please enter %d scores for %s %s:\n", SCORES, 
                class[i].handle.first, class[i].handle.last);
        for ( j = 0; j < SCORES; j++){
            while (scanf("%f", &class[i].scores[j]) != 1){
                scanf("%*s");
                puts("Please use numeric input.");
            }    
        }
    }
}

void make_average(struct student class[], int lim){
    int i, j;
    float sum;

    for ( i = 0; i < lim; i++){
        for ( j = 0, sum = 0; j < SCORES; j++)
            sum += class[i].scores[j];
        class[i].average = sum / SCORES;
    }  
}

void show_class(const struct student class[], int lim){
    int i, j;
    char whole_name[2*LEN + 1];
    
    for ( i = 0; i < lim; i++){
        strcpy(whole_name, class[i].handle.first);
        strcat(whole_name, " ");
        strcat(whole_name, class[i].handle.last);
        printf("%21s:", whole_name);
        for ( j = 0; j < SCORES; j++)
            printf("%6.1f ", class[i].scores[j]);
        printf("%6.1f\n", class[i].average);
    }
}
void show_avg(const struct student class[], int lim){
    int i, j;
    float sum[SCORES];

    for ( j = 0; j < SCORES; j++){
        for ( i = 0, sum[j] = 0; i < lim; i++){
            sum[j] += class[i].scores[j];
        }
    }
    printf("%22s%7.1f%7.1f%7.1f\n", " ", sum[0], sum[1], sum[2]);
}



