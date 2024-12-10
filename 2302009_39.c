#include <stdio.h>
main(){
    float starting_number, ending_number, sum=0;
    printf("Enter a starting number: ");
    scanf("%f", &starting_number);
    printf("Enter a ending number: ");
    scanf("%f", &ending_number);
    for(int i = starting_number; i <= ending_number; i++) {
        if(i % 17 != 0) {
            sum += i;
        }
    }
    printf("The sum is: %f", sum);
}

