#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 30
/*
 * 作者： Andy
 * 日期： 2021-10-13
 * 页码： 第476页
 * 目的： enum的用法
 */
enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {
    "red", "orange", "yellow", "green", "blue", "violet"
};

char * s_gets(char * st, int n);

int main(void)
{
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts("Enter a color (empty line to quit): ");
    while (s_gets(choice, LEN)!=NULL && choice[0]!='\0'){
        for ( color = red; color < violet; color++){
            if(strcmp(choice, colors[color]) == 0){
                color_is_found = true;
                break;
            }
        }
        if(color_is_found == true)
            switch (color)
            {
            case red:
                puts("Roses are red.");
                break;
            case orange:
                puts("Poppies are orange.");
                break;
            case yellow:
                puts("Sunflowers are yellow.");
                break;
            case green:
                puts("Grass is green.");
                break;
            case blue:
                puts("Bluebells are blue.");
                break;
            case violet:
                puts("Violets are violet.");
                break;
            }
        else
            printf("I don't know about the color %s.\n", choice);
        color_is_found = false;
        puts("Next color, please (empty line to quit):");
    }
    puts("Goodbye!");
    
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