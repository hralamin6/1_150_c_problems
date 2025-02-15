#include <stdio.h>
int main(){
    int number, isEven=0, sum_of_even=0, sum_of_odd=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    isEven = number%2==0?1:0;
          printf("Square of each even between 1 and %d: \n", number);
        for(int i=1+(isEven?0:1); i<=number; i+=2) {
            printf("%d^2 = %d\n",i , i*i);
            sum_of_even += i;
        }
          printf("Square of each odd between 1 and %d: \n", number);
        for(int i=1+(isEven?1:0); i<=number; i+=2) {
            printf("%d^2 = %d\n",i , i*i);
            sum_of_odd += i;
        }

}
