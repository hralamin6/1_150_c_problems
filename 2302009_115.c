#include <stdio.h>
int main(){
    int number, last_number, sum=0, temp_min, temp_max;
    float average;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter last number: ");
    scanf("%d", &last_number);
    temp_max = number>last_number?number:last_number;
    temp_min = number<last_number?number:last_number;
    printf("Sequence from the lowest to highest number: \n");
    for(int i=temp_min; i<=temp_max; i+=1) {
        printf("%d\t", i);
        sum += i;
    }
    average = (float) sum/(temp_max-temp_min+1);
    printf("\nAverage value of the said sequence: %.2f\n", average);

}
