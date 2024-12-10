#include <stdio.h>
main(){
    float s=0, j=1;
    for (float i = 1; i <= 10; i=i+1) {
        printf("%.0f/%.0f + ", 1.0, i);
        s += 1.0/i;
    }
    printf("\n sum : %.2f\n", s);
}