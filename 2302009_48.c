#include <stdio.h>
main(){
    int number[7];
    for (int i = 0; i <5; i=i+1) {
        printf("Enter a number(%d): ", i+1);
        scanf("%d",&number[i]);
        if(number[i]<=0) {
            number[i]=100;
        }
    }
    for (int i = 0; i <5; i=i+1) {
            printf("n[%d] = %d \n", i, number[i]);
    }
}

