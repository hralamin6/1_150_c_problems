#include <stdio.h>
int main(){
    int number, last_number, isEven=0, sum_of_even=0, sum_of_odd=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter last number: ");
    scanf("%d", &last_number);
    isEven = number%2==0?1:0;
        printf("even: ");
        for(int i=number+(isEven?0:1); i<=last_number; i+=2) {
            sum_of_even += i;
        }
        printf("\nodd: ");
        for(int i=number+(isEven?1:0); i<=last_number; i+=2) {
            sum_of_odd += i;
        }
    printf("Sum of all odd values between %d and %d: %d\n", number, last_number, sum_of_odd);
    printf("Sum of all even values between %d and %d: %d\n", number, last_number, sum_of_even);

}
