// 符号常量和函数原型 —— main函数在09_09.c中
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "****************************************"

int menu(void);
int get_nights(void);
void show_price(double rate, int nights);