#include <stdio.h>
main(){
    float x,y;
    printf("Enter x y: ");
    scanf("%f %f", &x, &y);
    printf("Before swapping the value of x & y: %.3f %.3f \n", x,y);
    x= x+y;
    y=x-y;
    x=x-y;
    printf("After swapping the value of x & y: %.3f %.3f \n", x,y);
}