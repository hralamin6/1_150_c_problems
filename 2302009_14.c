#include <stdio.h>
main(){
    int distance, fuel;
    float fuelPercentage;
    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%d", &fuel);
    fuelPercentage = (float) distance/fuel;

    printf("max: %.2f\n", fuelPercentage);

    }
