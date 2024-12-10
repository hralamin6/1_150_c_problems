#include <math.h>
#include <stdio.h>
main(){
    float x, result;
    printf("Please enter a value of x for (sin1/x): ");
    scanf("%f",&x);
    result=sin(1/x);
    printf("The result is %f",result);
}