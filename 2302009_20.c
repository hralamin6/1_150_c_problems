#include <math.h>
#include <stdio.h>
main(){
    double a, b, c, x1, x2;
    printf("enter value of a: ");
    scanf("%lf", &a);
    printf("enter value of b: ");
    scanf("%lf", &b);
    printf("enter value of c: ");
    scanf("%lf", &c);
    if (b*b-4*a*c<0) {
        printf("error (unreal number)");
    }else {
        x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
}
