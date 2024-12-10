#include <stdio.h>
main(){
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    float perimeter = 2.0*(22.0/7)*radius;
    float area = (22.0/7)*radius*radius;
    printf("Perimeter of the circle = %.2f \n", perimeter);
    printf("Area of the circle = %.2f", area);
}
