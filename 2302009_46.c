#include <stdio.h>
main(){
    float s=0, j=1;
    for (int i = 1; i <= 7; i=i+2) {
        s += i/j;
        j=j*2;
    }
    printf("\n sum : %.2f\n", s);
}


