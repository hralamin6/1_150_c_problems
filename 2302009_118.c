#include <stdio.h>
main(){
    int input[5], sum=0;
    float avg;
    for (int i = 0; i < 5; i++) {
        printf("Input five subject marks(0-100): %d: ", i+1);
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (input[i] >= 0) {
            sum += input[i];
        }
    }
    avg = ((float) sum) / 5.0;
    printf("Average marks =  %.2f\n", avg);
}
