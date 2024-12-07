/*Header files contains information about function that 
are defined outside your program.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void NewLine(void){
    printf("\n");
}

void NewLines(int n){
    for(int i = 0; i < n; ++i){
        NewLine();
    }
}
int main(){
    const double PI = acos(-1);
    printf("%.16f", PI);
    // Converting to int always round dawn:
    printf("%d", (int) PI);
    NewLines(10);
    printf("%f", PI);

    return 0;
}