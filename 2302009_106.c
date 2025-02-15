#include <stdio.h>
int main(){
    float number[7]={0}, count_positive=0, count_negative=0, count_odd=0, count_even=0;
    for(int i=0;i<7;i++) {
        printf("Enter number %.0f: ", i+1.0);
        scanf("%f", &number[i]);
    }
    for(int i=0;i<7;i++) {
        if(number[i]>=0) {
            count_positive++;
            if ((int) number[i]%2==0) {count_even++;}else {count_odd++;}
        }else {
            count_negative++;
            if ((int) number[i]%2==0) {count_even++;}else {count_odd++;}
        }
    }
    printf("Number of even values: %.2f \n", count_even);
    printf("Number of odd values: %.2f \n", count_odd);
    printf("Number of positive values: %.2f \n", count_positive);
    printf("Number of negative values: %.2f \n", count_negative);
}
