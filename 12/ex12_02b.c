// 需和ex12_02a.c联合编译

#include <stdio.h>
static int global_mode;         // 0表示英制; 1表示美制
static int global_distance;
static double global_fuel;

void set_mode(int mode){
    if(mode == 1 || mode == 0)
        global_mode = mode;
    else{
        global_mode = 1;
        printf("Invalid mode specified. Mode %d(US) used.\n", global_mode);
    }
}
void get_info(void){
    if(global_mode == 0){
        // 英制
        printf("Enter distance travelled in kilometers: ");
        scanf("%d", &global_distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &global_fuel);
    }else{
        // 美制
        printf("Enter distance travelled in miles: ");
        scanf("%d", &global_distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &global_fuel);
    }
}
void show_info(void){
    if(global_mode == 0){
        // 英制
        printf("Fuel consumption is %.2lf liters per 100km.\n", 
                100 * global_fuel / global_distance);
    }else{
        // 美制
        printf("Fuel consumption is %.2lf miles per gallon.\n", global_distance / global_fuel);
    }
}

