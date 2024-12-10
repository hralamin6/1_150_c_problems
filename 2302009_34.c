#include <stdio.h>
main(){
    int a, b, sum=0;
    printf(" Input a pair of numbers (for example 10 2): ");
    scanf("%d %d", &a, &b);
    if(a<b) {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    for(int i=b; i<=a; i++) {
        if(i%2!=0) {
            sum+=i;
        }
    }
    printf("Sum of the odd numbers are: %d", sum);
}

