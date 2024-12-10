#include <stdio.h>
main(){
    int number[7];
    printf("Enter a the first number: ");
    scanf("%d",&number[0]);
    for (int i = 1; i <5; i=i+1) {
            number[i]=number[i-1]*3;
    }
    for (int i = 0; i <5; i=i+1) {
            printf("n[%d] = %d \n", i, number[i]);
    }
}


