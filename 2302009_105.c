#include <stdio.h>
int main(){
    float number[7]={0}, count_positive=0, count_negative=0, sum_of_positive=0, sum_of_negative=0;
    float avg_of_positive=0, avg_of_negative=0;
    for(int i=0;i<7;i++) {
        printf("Enter number %.0f: ", i+1.0);
        scanf("%f", &number[i]);
    }
    for(int i=0;i<7;i++) {
        if(number[i]>=0) {
            count_positive++;
            sum_of_positive += number[i];
        }else {
            count_negative++;
            sum_of_negative += number[i];
        }
    }
    avg_of_positive = (float) sum_of_positive / count_positive;
    avg_of_negative = (float) sum_of_negative / count_negative;
    printf("%.0f Number of positive numbers: Average %.2f \n", count_positive, avg_of_positive);
    printf("%.0f Number of negative numbers: Average %.2f \n", count_negative, avg_of_negative);
}
