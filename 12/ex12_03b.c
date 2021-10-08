// 需和ex12_03a.c联合编译

#include <stdio.h>
#include "ex12_03.h"

void set_mode(int * mode){
    if(*mode != METRIC && *mode != US){
        *mode = US;
        printf("Invalid mode specified. Mode %d(US) used.\n", *mode);
    }
}

void get_info(int mode, double * distance, double * fuel){  
    if(mode == METRIC){
        // 英制
        printf("Enter distance travelled in kilometers: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", fuel);
    }else{
        // 美制
        printf("Enter distance travelled in miles: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", fuel);
    }
}

void show_info(int mode, double distance, double fuel){
    if(mode == METRIC){
        // 英制
        printf("Fuel consumption is %.2lf liters per 100km.\n", 
                100 * fuel / distance);
    }else{
        // 美制
        printf("Fuel consumption is %.2lf miles per gallon.\n", distance / fuel);
    }
}