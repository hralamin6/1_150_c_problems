#include <stdio.h>
main(){
    int input[10], count_positive=0, sum_of_positive=0;
    float avg_of_positive;
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (input[i] >= 0) {
            count_positive++;
            sum_of_positive += input[i];
        }
    }
    avg_of_positive = ((float) sum_of_positive) / count_positive;
    printf("avarage of positive numbers: %.2f\n", avg_of_positive);
}
