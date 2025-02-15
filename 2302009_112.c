#include <stdio.h>
main(){
    int input[7], max=0, max_position;
    printf("Enter 6 numbers: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i <6; i++) {
        if (input[i] > max) {
            max = input[i];
            max_position = i+1;
        }
    }
    printf("max: %d\n", max);
    printf("max position: %d\n", max_position);
}
