#include <stdio.h>
#include <stdlib.h>

int SECONDS_IN_DAY = 24 * 3600;

int since_midnight(int hr, int min, int sec){
    /* Calculate seconds passed since midnight. */

    return (hr * 3600 + min * 60 + sec);
}

int until_midnight(int hr, int min, int sec){
    /* Calculate seconds until midnight. */

    int passed_seconds = since_midnight(hr, min, sec);

    return (SECONDS_IN_DAY - passed_seconds);
}

void percentage_time_passed(int hr, int min, int sec){
    /* Calculate percentage of time pissed since midnight. */

    int sec_passed = since_midnight(hr, min, sec);
    printf("%.1f%%\n", (float)100*(sec_passed)/SECONDS_IN_DAY);
}

int main(){
    int hour, minute, second;
    hour = 14; 
    minute = 32;
    second = 39;

    printf("Seconds since midnight: %d.\n", since_midnight(hour, minute, second));
    printf("Seconds remaining in the day: %d.\n", until_midnight(hour, minute, second));
    percentage_time_passed(hour, minute, second);


    return 0;
}