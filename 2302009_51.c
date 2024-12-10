#include <stdio.h>
main(){
    int number[5], temp;
    printf("Input the 5 members of the array: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &number[i]);
    }
    for(int i=0; i<5; i++){
        if(i < 5/2){
            temp = number[i];
            number[i] = number[5-(i+1)];
            number[5-(i+1)] = temp;
        }
    }
    for(int i=0; i<5; i++){
       printf("array_n[%d] = %d \n", i, number[i]);
    }
}
