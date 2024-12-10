#include <stdio.h>
main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i=i+1) {
        if(number%i==0) {
            printf("%d \t",i);
        }
    }
}


