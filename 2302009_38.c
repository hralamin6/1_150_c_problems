#include <stdio.h>
main(){
    float number, divider, division;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("Enter a divider: ");
    scanf("%f", &divider);
    if(divider != 0) {
        division = number / divider;
        printf("%.2f / %.2f = %.2f", number, divider, division);
    }else {
        printf("Division by Zero is an impossible thing of the world");
    }
}

