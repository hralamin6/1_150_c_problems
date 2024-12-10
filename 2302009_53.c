#include <stdio.h>
main(){
    float p, n, r, i;
    printf("Enter the value of p: ");
    scanf("%f", &p);
    printf("Enter the value of n: ");
    scanf("%f", &n);
    printf("Enter the value of r: ");
    scanf("%f", &r);
    i=p*n*(r/100.0);
    printf("Simple interest = %.2f\n", i);
}
