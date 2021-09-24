#include <stdio.h>
/*
 * 作者： Andy
 * 日期： 2021-09-24
 * 页码： 第216页
 * 目的： The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets
 *       for $1.15 per pound, and carrots for $1.09 per pound. It gives a 5%
 *       discount for orders of $100 or more prior to adding shipping costs. It
 *       charges $6.50 shipping and handling for any order of 5 pounds or under,
 *       $14.00 shipping and handling for orders over 5 pounds and under 20 pounds,
 *       and $14.00 plus $0.50 per pound for shipments of 20 pounds or more. Write
 *       a program that uses a switch statement in a loop such that a response of
 *       a lets the user enter the pounds of artichokes desired, b the pounds of beets,
 *       c the pounds of carrots, and q allows the user to exit the ordering
 *       process. The program should keep track of cumulatives totals. That is,
 *       if the user enters 4 pounds of beets and later enters 5 pounds of beets,
 *       the program should use report 9 pounds of beets. The program then should
 *       compute the total charges, the discount, if any, the shipping charges,
 *       and the grand total. The program then should display all the purchase
 *       information: the cost per pound, the pounds ordered, and the cost for
 *       that order for each vegetable, the total cost of the order, the discount
 *       (if there is one), the shipping charge, and the grand total of all the
 *       charges.
 */

int main(void)
{
    const double artichokes = 2.05;
    const double beet = 1.15;
    const double carrot = 1.09;
    const double discount_tier = 100.0;
    const double discount_rate = 0.05;
    const double shipping_tier1 = 5.0;
    const double shipping_tier2 = 20.0;
    const double shipping_cost1 = 6.5;
    const double shipping_cost2 = 14.0;
    const double shipping_cost3 = 0.5;

    char choice;
    double pounds_artichokes = 0;
    double pounds_beet = 0;
    double pounds_carrot = 0;
    double pounds_total = 0;
    double pounds_tmp;
    double total_charges;
    double discount = 0;
    double shipping_charges = 0;
    double grand_total;
    double cost_artichokes;
    double cost_beet;
    double cost_carrot;

    printf("Please order:\n");
	printf("a. artichokes\n");
	printf("b. beets\n");
	printf("c. carrots\n");
	printf("q. Finished!\n");

    while ((choice = getchar())!= 'q'){
        while (getchar() != '\n')
            continue;
        switch (choice)
        {
        case 'a':
            printf("How many pounds of artichokes do you want to add?\n");
            while (scanf("%lf", &pounds_tmp) != 1){
                printf("Please enter a number:\n");
                while (getchar() != '\n')
                    continue;
            }
            pounds_artichokes += pounds_tmp; 
            break;
        case 'b':
            printf("How many pounds of beets do you want to add?\n");
            while (scanf("%lf", &pounds_tmp) != 1){
                printf("Please enter a number:\n");
                while (getchar() != '\n')
                    continue;
            }
            pounds_beet += pounds_tmp;
            break;
        case 'c':
            printf("How many pounds of carrots do you want to add?\n");
            while (scanf("%lf", &pounds_tmp) != 1){
                printf("Please enter a number:\n");
                while (getchar() != '\n')
                    continue;
            }
            pounds_carrot += pounds_tmp;
            break;
        default:
            break;
        }
        while (getchar() != '\n')
                    continue;
        printf("Please order:\n");
        printf("a. artichokes\n");
        printf("b. beets\n");
        printf("c. carrots\n");
        printf("q. Finished!\n");  
    }
    cost_artichokes = artichokes * pounds_artichokes;
    cost_beet = beet * pounds_beet;
    cost_carrot = carrot * pounds_carrot;
    total_charges = cost_artichokes + cost_beet + cost_carrot;

    if(total_charges > discount_tier)
        discount = total_charges * discount_rate;
    
    pounds_total = pounds_artichokes + pounds_beet + pounds_carrot;
    if(pounds_total < shipping_tier1)
        shipping_charges = shipping_cost1;
    else if(pounds_total < shipping_tier2)
        shipping_charges = shipping_cost2;
    else{
        shipping_charges = shipping_cost2 + (pounds_total - shipping_tier2) * shipping_cost3;
    }
    grand_total = total_charges - discount + shipping_charges;

    //打印最终结果
    printf("%10s %6s %6s %11s\n", "Goods", "Price", "Pounds", "Total_price");
    printf("%10s %6.2f %6.2f %11.2f\n", "artichoke", artichokes, pounds_artichokes, cost_artichokes);
    printf("%10s %6.2f %6.2f %11.2f\n", "beet", beet, pounds_beet, cost_beet);
    printf("%10s %6.2f %6.2f %11.2f\n", "carrot", carrot, pounds_carrot, cost_carrot);
    printf("%24s %11.2f\n", "Total", total_charges);
    printf("%24s %11.2f\n", "Discount", discount);
    printf("%24s %11.2f\n", "Shipping", shipping_charges);
    printf("%24s %11.2f\n", "Grand_total", grand_total);

    return 0;
}
