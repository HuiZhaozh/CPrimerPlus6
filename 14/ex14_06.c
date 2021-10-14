#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
#define PLAYER 18
/*
 * 作者： Andy
 * 日期： 2021-10-14
 * 页码： 第491页
 * 目的： A text file holds information about a softball team. Each line has data arranged as
 *       follows:
         4 Jessie Joybat 5 2 1 1
 * The first item is the player's number, conveniently in the range 0-18. The second item
 * is the player's first name, and the third is the player's last name. Each name is a single
 * word. The next item is the player's official times at bat, followed by the number of hits,
 * walks, and runs batted in (RBIs). The file may contain data for more than one game, so the
 * same player may have more than one line of data, and there may be data for other players between
 * those lines. Write a program that stores the data into an array of structures. The structure should
 * have members to represent the first and last names, the at bats, hits, walks, and RBIs 
 * (runs batted in), and the batting aevrage (to be calculated later). You can use the player number
 * as an array index. The program should read to end-of-file, and it should keep cumulative totals
 * for each player.
 * 
 * The world of baseball statistics is an involved one. For eaxmple, a walk or reaching base on an error
 * doesn't count as an at-bat but could possibly produce an RBI. But all this program has to do is read
 * and process the data file, as described next, without worrying about how realistic the data is.
 * 
 * The simplest way for the program to proceed is to initialize the structure contents to zeros, read the
 * file data into temporary variables, and then add them to the contents of the corresponding structure. 
 * After the program has finished reading the file, it should then calculate the batting average for each
 * player and store it in the corresponding structure member. The batting average is calculated by dividing
 * the cumulative number of hits for a player by the cumulative number of at-bats; it should be a
 * floating-point calculation. The program should then display the cumulative data for each player along 
 * with a line showing the combined statistics for the entire team.
 */
struct player {
    int number;
    char first_name[MAX];
    char last_name[MAX];
    int at_bats;            // 上场次数
    int hits;               // 击中数
    int walks;              // 走垒数
    int RBIs;               // 打点
    float batting_average;  // 安打率
};

void init_team(struct player * pp, int num);

int main(void)
{
    FILE * fp;
    struct player team[PLAYER];
    init_team(team, PLAYER);
    int number;
    char first_name[MAX];
    char last_name[MAX];
    int at_bats;
    int hits;
    int walks;
    int RBIs;
    int total_at_bats = 0;
    int total_hits = 0;
    int total_walks = 0;
    int total_RBIs = 0;
    int exist = 0;
    int i;
    int j = 0;

    if((fp = fopen("ex14_06.dat", "r")) == NULL){
        fprintf(stderr, "Could not open data file.\n");
        exit(EXIT_FAILURE);
    }
    while (fscanf(fp, "%d %s %s %d %d %d %d", &number, first_name, last_name, &at_bats, &hits, &walks, &RBIs) == 7){
        for ( i = 0; i <= j; i++){
            if(number == team[i].number){
                exist = 1;
                team[i].at_bats += at_bats;
                team[i].hits += hits;
                team[i].walks += walks;
                team[i].RBIs += RBIs;
            }
        }
        if(exist == 0){
            team[j].number = number;
            strcpy(team[j].first_name, first_name);
            strcpy(team[j].last_name, last_name);
            team[j].at_bats += at_bats;
            team[j].hits += hits;
            team[j].walks += walks;
            team[j].RBIs += RBIs;
            j++;
        }
        exist = 0;
    }
    
    for ( i = 0; i < j; i++){
        char whole_name[2*MAX+1];
        strcpy(whole_name, team[i].first_name);
        strcat(whole_name, " ");
        strcat(whole_name, team[i].last_name);
        printf("%2d %-40s %2d %2d %2d %2d %6.2f\n", team[i].number, whole_name, team[i].at_bats,
                 team[i].hits, team[i].walks, team[i].RBIs, (float)team[i].hits / team[i].at_bats);
        total_at_bats += team[i].at_bats;
        total_hits += team[i].hits;
        total_walks = team[i].walks;
        total_RBIs = team[i].RBIs;
    }
    printf("%-43s %2d %2d %2d %2d %6.2f\n", "Total", total_at_bats, total_hits, total_walks, total_RBIs,
            (float)total_hits / total_at_bats);

    return 0;
}

void init_team(struct player * pp, int num){
    int index;

    for ( index = 0; index < num; index++){
        pp[index].number = -1;
        pp[index].at_bats = 0;
        pp[index].hits = 0;
        pp[index].walks = 0;
        pp[index].RBIs = 0;
    } 
}
