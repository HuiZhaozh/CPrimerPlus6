#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-21
 * 页码： 第100页
 * 目的： 
 *     Write a program that asks for your first name, your last name, and then prints the names
 *     in the format last, first.
 */

int main(void)
{
    char fname[10], lname[10];

    printf("Please enter your first name:\n");
    scanf("%s", fname);
    printf("Please enter your last name:\n");
    scanf("%s", lname);
    printf("Your name is %s, %s.\n", lname, fname);
    return 0;
}

