#include <stdio.h>
main(){
    int number[7];
    for (int i = 0; i <5; i=i+1) {
        printf("Enter a number(%d): ", i);
        scanf("%d",&number[i]);
    }
    for (int i = 0; i <5; i=i+1) {
        if(number[i]<5) {
            printf("n[%d] = %d \n", i, number[i]);
        }
    }
}


