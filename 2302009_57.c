#include <stdio.h>
#include <math.h>
main(){
    int x=123, temp, digits[10], i=2;
    printf("Enter a number: ");
    scanf("%d", &x);
        printf("The original number = %d \n", x);
        temp = x;
        while(temp>0){
            digits[i]=temp%10;
            temp = temp/10;
            i--;
        }
        x=0;
        for(i=2; i>=0; i--){
            x += digits[i]*pow(10, i);
        }
        printf("The reverse of the said number: %d \n", x);
}
