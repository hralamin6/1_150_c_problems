#include <stdio.h>
main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("All positive divisors of %d: \n", number);
    for (int i = 1; i <= number; i=i+1) {
        if(number%i==0) {
            printf("%d \n",i);
        }
    }
}


