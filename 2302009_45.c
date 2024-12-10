#include <stdio.h>
main(){
    float s=0, j=1;
    for (int i = 1; i <= 50; i=i+1) {
        s += 1.0/i;
    }
    printf("\n sum : %.2f\n", s);
}


