#include <stdio.h>
main(){
    float number, divider, division;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("Enter a divider: ");
    scanf("%f", &divider);
    if(divider != 0) {
        division = number / divider;
        printf("Result: %.2f", division);
    }else {
        printf("Division not possible..!");
    }
}

