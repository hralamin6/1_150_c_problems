#include <math.h>
#include <stdio.h>
main(){
    float number;
    printf("Input number of lines: ");
    scanf("%f", &number);
    for(int i = 1; i <= number; i++) {
        for(int j = 1; j <= 3; j++) {
            printf("%.0f \t", pow(i, j));
        }
        printf("\n");
    }
}

