#include <stdio.h>
main(){
    float starting_number, ending_number;
    printf("Enter a starting number: ");
    scanf("%f", &starting_number);
    printf("Enter a ending number: ");
    scanf("%f", &ending_number);
    for(int i = starting_number; i <= ending_number; i++) {
        if(i % 7 == 2 || i % 7 == 3 ) {
            printf("%d\t", i);
        }
    }
}

