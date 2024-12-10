#include <stdio.h>
main(){
    float distance_in_cm, distance_in_inch;
    printf("Input the distance in cm: ");
    scanf("%f", &distance_in_cm);
    distance_in_inch = distance_in_cm/2.54;
    printf("Distance of %.2f cms is = %.2f inches", distance_in_cm, distance_in_inch);
}