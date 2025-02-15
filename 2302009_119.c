#include <stdio.h>
int main(){
    int number, last_number, sum=0, temp_min, temp_max;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter last number: ");
    scanf("%d", &last_number);
    temp_max = number>last_number?number:last_number;
    temp_min = number<last_number?number:last_number;
    for(int i=temp_min; i<=temp_max; i+=1) {
        if (i%7!=0) {
            sum += i;
        }
    }
    printf("\nSum of all numbers between said numbers (inclusive) not divisible by 7: %d\n", sum);

}
