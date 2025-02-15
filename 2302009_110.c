#include <stdio.h>
int main(){
    int number, isEven=0, isPositive=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    isEven = number%2==0?1:0;
    isPositive = number%2==0?1:0;
    if (isEven && isPositive) {
        printf("Number is positive-even\n");
    }else if(isEven && !isPositive) {
        printf("Number is negative-even\n");
    }else if(!isEven && isPositive) {
        printf("Number is positive-odd\n");
    }else if(!isEven && !isPositive) {
        printf("Number is negative-odd\n");
    }
}
