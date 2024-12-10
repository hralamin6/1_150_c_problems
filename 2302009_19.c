#include <stdio.h>
main(){
    int firstInterger, secondInterger, thirdInterger, fourthInterger;
    printf("Enter first integer: ");
    scanf("%d", &firstInterger);
    printf("Enter second integer: ");
    scanf("%d", &secondInterger);
    printf("Enter third integer: ");
    scanf("%d", &thirdInterger);
    printf("Enter fourth integer: ");
    scanf("%d", &fourthInterger);

    if (secondInterger > thirdInterger && fourthInterger > firstInterger && thirdInterger+fourthInterger > firstInterger+secondInterger) {
        printf("Correct values");
    }else {
        printf("Wrong values");
    }

}
