#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    printf("Hello, World!\n");
    int day, month, year;
    day = 28;
    month = 11;
    year = 2024;
    printf("month = %d \nday = %d\nyear = %d\n", month, day, year);

    printf("American Format: %d/%d/%d\n", month, day, year);
    printf("European Format: %d.%d.%d", day,month, year);
    

    return 0;
}