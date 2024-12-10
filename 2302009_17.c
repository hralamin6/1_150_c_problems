#include <stdio.h>
main(){
    int  hours, minutes, seconds;
    printf("Input seconds: ");
    scanf("%d",&seconds);
    hours = seconds/(60*60);
    seconds = seconds % (60*60);
    minutes = seconds/60;
    seconds = seconds % 60;

    printf("H:M:S - %d:%d:%d\n",hours,minutes,seconds);
}
