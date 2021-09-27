#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-27
 * 页码： 第276页
 * 目的： Generalize the to_binary() function of Listing 9.8 to a to_base_n()
 *       function that takes a second argument in the range 2-10. It then should
 *       print the number that is its first argument to the number base given by
 *       the second argument. For example, to_base_n(129,8) would display 201,
 *       the base-8 equivalent of 129. Test the function in a complete program.
 */

void to_binary(unsigned long n, unsigned base);

int main(void)
{
    unsigned long number;
    unsigned base;

    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1){
        printf("Please enter the number base (2-8): ");
        while (scanf("%u", &base) != 1 || (base < 2 || base > 8)){
            printf("The base should be in the range 2-8: \n");
        }
        
        to_binary(number, base);
        putchar('\n');
    printf("Enter an integer (q to quit):\n");
    }
    printf("Done!\n");
    return 0;
}

void to_binary(unsigned long n, unsigned base){
    int r;

    r = n % base;
    if (n >= base)
        to_binary(n/base, base);
    putchar('0'+r);   
}
