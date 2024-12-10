#include <stdio.h>
main(){
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        max = a;
    }else if (b > a && b > c) {
        max = b;
    }else if (c > a && c > b) {
        max = c;
    }
    printf("max: %d\n", max);

    }
