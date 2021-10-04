#include <stdio.h>
#include <string.h>
#define LISTSIZE 6
/*
 * 作者： Andy
 * 日期： 2021-10-02
 * 页码： 第351页
 * 目的： strncmp函数
 */

int main(void)
{
    const char * list[LISTSIZE] = {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        "asterism", "astrophobia"
    };
   int count = 0;
   int i;

   for (i = 0; i < LISTSIZE; i++){
       if(strncmp(list[i], "astro", 5) == 0){
           printf("Found: %s\n", list[i]);
           count++;
       }
   }
   printf("The list contained %d words beginning with astro.\n", count);

    return 0;
}