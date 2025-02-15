#include <stdio.h>
int main(){
    double price, increased_price, differance, rate_of_increase;
    printf("Enter price: ");
    scanf("%lf", &price);
    printf("Enter increased price: ");
    scanf("%lf", &increased_price);
    differance = increased_price-price;
    printf("difference = %.2lf\n\n", differance);
    rate_of_increase = (differance*100.0) / price;
    printf("Rate of increase: %.2lf\n", rate_of_increase);
}
