#include <stdio.h>
main(){
    int a, b;
    printf(" Input a pair of numbers (for example 10 2): ");
    scanf("%d %d", &a, &b);
    if(a<b) {
        printf("The pair is in ascending order!");
    }else {
        printf("The pair is in descending order!");
    }
}

