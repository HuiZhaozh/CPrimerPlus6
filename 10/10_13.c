#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-28
 * 页码： 第294页
 * 目的： 指针操作
 */

int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, * ptr2, * ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value\t\t  dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p\t*ptr1 = %d\t\t &ptr1 = %p\n", ptr1, *ptr1, &ptr1); 
    // 指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1+4 = %p\t*(ptr1+4) = %d\n", ptr1 + 4, *(ptr1+4));
    // 递增指针
    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p\t*ptr1 = %d\t\t &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    // 递减指针
    ptr2--;
    printf("\nvalues after ptr2--:\n");
    printf("ptr2 = %p\t*ptr2 = %d\t\t &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    // 指针恢复初始值
    --ptr1;
    ++ptr2;
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    // 一个指针减去另一个指针
    printf("\nsubstracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
    // 一个指针减去一个整数
    printf("\nsubstracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}