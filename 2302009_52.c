#include <stdio.h>
main(){
    int number[5], count=0, min;
    printf("Input the 5 members of the array: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &number[i]);
    }
                min = number[0];
    for(int i=0; i<5; i++){
        if(number[i] < min){
            min = number[i];
            count=i;
        }
    }
       printf("Smallest Value: %d \n", min);
       printf("Position of the element: %d \t", count);
}
