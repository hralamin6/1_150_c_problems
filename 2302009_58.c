#include <stdio.h>
main(){
    float number[4], differance, min, max;
    printf("Input the 5 members of the array: \n");
    for(int i=0; i<4; i++){
        scanf("%f", &number[i]);
    }
                min = number[0];
                max = number[0];
    for(int i=0; i<4; i++){
        if(number[i] < min){
            min = number[i];
        }
        if(number[i] > max){
            max = number[i];
        }
    }
    differance = max - min;
       printf("Smallest Value: %.3f \n", min);
       printf("Max value: %.3f \n", max);
       printf("Differance: %.3f \n", differance);
}