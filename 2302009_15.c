#include <math.h>
#include <stdio.h>
main(){
    float x1,y1,x2,y2, distance;
    printf("Enter the value of x1 y1: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2 y2: ");
    scanf("%f%f",&x2,&y2);
    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance between the said points: %f\n",distance);
    }
