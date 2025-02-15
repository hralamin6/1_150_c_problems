#include <stdio.h>
int main(){
    int number, last_number, isEven=0, sum_of_even=0, temp_min, temp_max;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter last number: ");
    scanf("%d", &last_number);
    isEven = number%2==0?1:0;
    temp_max = number>last_number?number:last_number;
    temp_min = number<last_number?number:last_number;
    for(int i=temp_min+(isEven?0:1); i<=temp_max; i+=2) {
        sum_of_even += i;
    }
    printf("Sum of all even values between %d and %d: %d\n", number, last_number, sum_of_even);

}
