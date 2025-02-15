#include <stdio.h>
int main(){
    int number, last_number, isEven=0, sum_of_odd=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter last number: ");
    scanf("%d", &last_number);
    isEven = number%2==0?1:0;
    for(int i=number+(isEven?1:0); i<number+(2*last_number); i+=2) {
        sum_of_odd += i;
    }
    printf("Sum of %d odd numbers starting from %d:: %d\n",last_number, number, sum_of_odd);
}
