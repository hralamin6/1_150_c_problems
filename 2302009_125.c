
#include <stdio.h>
main(){
    int number[7];
    printf("Enter a number: ");
    scanf("%d",&number[0]);
    for (int i = 1; i <7; i=i+1) {
        number[i] = number[i-1]*2;
    }
    for (int i = 0; i <7; i=i+1) {
            printf("n[%d] = %d \n", i, number[i]);
    }
}


