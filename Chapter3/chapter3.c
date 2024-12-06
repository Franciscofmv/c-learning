/*Header files contains information about function that 
are defined outside your program.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main(){
    const double PI = acos(-1);
    printf("%.16f", PI);
    // Converting to int always round dawn:
    printf("%d", (int) PI);

    return 0;
}