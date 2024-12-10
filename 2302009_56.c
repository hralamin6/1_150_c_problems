#include <stdio.h>
main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
        printf("Before left shifting: %d \n", x);
        x <<= 2;
        printf("Before left shifting: %d \n", x);
}
