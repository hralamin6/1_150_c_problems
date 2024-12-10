#include <stdio.h>
main(){
    int input[10], count_positive=0, count_negatiove=0;
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (input[i] >= 0) {
            count_positive++;
        }else {
            count_negatiove++;
        }
    }
    printf("Number of positive count: %d \n", count_positive);
    printf("Number of negative count: %d \n", count_negatiove);
}
