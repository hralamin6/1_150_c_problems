#include <stdio.h>
int main(){
    int number[10], min, max, sum=0, positive_count=0;
    float avg;
    for(int i=0; ; i++){
        printf("Enter a number %d: ", i);
        scanf("%d", &number[i]);
        if(i==0) {min = number[0];max = number[0];
        }
        if(number[i]<=0) {
            break;
        }else {
            if(number[i]<min) {min = number[i];}
            if(number[i]>max) {max = number[i];}
        }
        sum += number[i];positive_count++;
    }
    avg = (float) sum/positive_count;
    printf("Positive value : %d \n", positive_count);
    printf("Minimum value : %d \n", min);
    printf("Maximum value : %d \n", max);
    printf("Average value : %.2f \n", avg);
}
