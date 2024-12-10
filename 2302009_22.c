#include <stdio.h>
main(){
    int input[10], sum_of_odd=0;
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (input[i] % 2 != 0) {
            sum_of_odd += input[i];
        }
    }
    printf("Sum of all odd values: %d\n", sum_of_odd);
}
