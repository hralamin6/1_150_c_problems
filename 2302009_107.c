#include <stdio.h>
int main(){
    int number, isEven=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    isEven = number%2==0?1:0;
        printf("even: ");
        for(int i=number+(isEven?2:1); i<=number+20; i+=2) {
            printf("%d, ", i);
        }
        printf("\nodd: ");
        for(int i=number+(isEven?1:2); i<=number+20; i+=2) {
            printf("%d, ", i);
        }
}
