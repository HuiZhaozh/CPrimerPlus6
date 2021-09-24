#include <stdio.h>
#include <ctype.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第202页
 * 目的： switch语句
 */

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");

    while ((ch = getchar()) != '#'){
        if (ch == '\n')
            continue;
        if(islower(ch)){
            switch (ch)
            {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati, rocoonlike mammal\n");
                break;
            case 'd':
                printf("Desman, aquatic, molelike critter\n");
                break;
            case 'e':
                printf("echidna, the spiny anteater\n");
                break;
            default:
                printf("That's a stumper!\n");
                break;
            }
        }else
            printf("I recognize only lowercase letters.\n");
        //下面两行代码读取剩余字符(包括最后的Enter键产生的'\n')
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}