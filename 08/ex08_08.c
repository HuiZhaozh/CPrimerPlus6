#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第242页
 * 目的： Write a program that shows you a menu offering you the choice of addition,
 *       subtraction, multiplication, or division. After getting your choice, the
 *       program asks for two numbers, then performs the requested operations. The
 *       program should accept only the offered menu choices. It should use type
 *       float for the numbers and allow the user to try again if he or she fails
 *       to enter a number. In the case of division, the program should prompt the
 *       user to enter a new value if 0 is entered as the value for the second number.
 *       A typical program run should look like this:
            Enter the operation of your choice:
            a. add           s. subtract
            m. multiply      d. divide
            q. quit
            a
            Enter first number: 22.4
            Enter second number: one
            one is not an number.
            Please enter a number, such as 2.5, -1.78E8, or 3: 1
            22.4 + 1 = 23.4
            Enter the operation of your choice:
            a. add           s. subtract
            m. multiply      d. divide
            q. quit
            d
            Enter first number: 18.4
            Enter second number: 0
            Enter a number other than 0: 0.2
            18.4 / 0.2 = 92
            Enter the operation of your choice:
            a. add           s. subtract
            m. multiply      d. divide
            q. quit
            q
            Bye.
 */

void menu(void);
float get_float();
int main(void)
{
    char choice;
    float first_num, second_num;
    float answer;

    menu();
    while ((choice = getchar()) != 'q'){
        while (getchar() != '\n')
            ;
        switch (choice)
        {
        case 'a':
            first_num = get_float();
            second_num = get_float();
            answer = first_num + second_num;
            break;
        case 's':
            first_num = get_float();
            second_num = get_float();
            answer = first_num - second_num;
            break;
        case 'm':
            first_num = get_float();
            second_num = get_float();
            answer = first_num * second_num;
            break;
        case 'd':
            first_num = get_float();
            while ((second_num = get_float()) == 0 )
                printf("Enter a number other than 0: \n");
            answer = first_num / second_num;
            break;
        default:
            printf("Please enter a、s、m、d or q.\n");
            continue;
        }
        printf("The answer is %g.\n", answer);
        menu();
    }
    printf("Bye.\n");
    
    return 0;
}

void menu(void){
    printf("Enter the operation of your choice:\n");
	printf("a. add                  s. subtract\n");
	printf("m. multiply             d. divide\n") ;
	printf("q. quit\n");
}

float get_float(){
    float input;
    char ch;

    printf("Enter a number: ");
    while (scanf("%f", &input) != 1){
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a float.\nPlease enter a ");
        printf("float value, such as 2.5, -1.78E8, or 3: ");
    }
    while (getchar() != '\n')
        continue;
    return input;
}