#include <stdio.h>
main(){
    float item1Weight, item1Number, item2Weight, item2Number, sum, avg;
    printf("Enter item1 weight and item1 number= ");
    scanf("%f %f", &item1Weight, &item1Number);
    printf("Enter item2 weight and item2 number= ");
    scanf("%f %f", &item2Weight, &item2Number);
    sum =  item1Weight * item1Number + item2Weight * item2Number;
    avg = sum / (item1Number + item2Number);
    printf("Average weight is %.2f\n", avg);

    }
