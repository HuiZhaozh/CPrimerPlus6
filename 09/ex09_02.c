#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Devise a function chline(ch, i, j) that prints the requested character
 *       in i columns and j rows. Test it in a simple driver.
 */
void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;

    printf("Please enter ch, i, j:\n");
    ch = getchar();
    scanf("%d %d", &i, &j);
    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j){
    int k, l;
    for ( k = 0;  k < j; k++){
        for ( l = 0; l < i; l++)
            printf("%c", ch);
        printf("\n");        
    }  
}
