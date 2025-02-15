#include <stdio.h>
int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (number>0 && number<=20) {
        printf("range (1-20)");
    }else if (number>20 && number<=40) {
        printf("range (21-40)");
    }else if (number>40 && number<=60) {
        printf("range (41-60)");
    }else if (number>60 && number<=80) {
        printf("range (61-80)");
    }else if (number>80 && number<=100) {
        printf("range (81-100)");
    }else {
        printf("out or range");
    }
}
