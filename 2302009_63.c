#include <math.h>
#include <stdio.h>
main(){
    int x=68, sum=0, j=0;
    printf("Enter a number less than 100: ");
    scanf("%d", &x);
    for(int i=1; i<=x; i++){
        printf("%d^4 + \t", i);
        sum += pow(i,4);
        i=i+j;
        j+=1;
    }
        printf("\n Sum : %d \n", sum);
}
