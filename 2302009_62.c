#include <stdio.h>
main(){
    int x=123, temp, digits[10], i=2, sum=0;
    printf("Enter a number less than 500: ");
    scanf("%d", &x);
        temp = x;
        while(temp>0){
            digits[i]=temp%10;
            temp = temp/10;
            i--;
        }
        for(i=2; i>=0; i--){
            sum += digits[i];
        }
        printf("Sum of the digits of %d is %d \n",x, sum);
}
