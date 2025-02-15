#include <stdio.h>
int main(){
    int number[3], max, min, middle=0;
    for(int i=0;i<3;i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &number[i]);
    }
    max = number[0];
    min = number[0];
    for(int i=0;i<3;i++) {
        if (number[i] > max) {
            max = number[i];
        }
        if (number[i] < min) {
            min = number[i];
        }
    }
    if (number[0] > number[1] && number[0] < number[2] || number[0] < number[1] && number[0] > number[2]) {
        middle = number[0];
    }else if (number[1] > number[2] && number[1] < number[0] || number[1] < number[2] && number[1] > number[0]) {
        middle = number[1];
    }else if (number[2] > number[0] && number[2] < number[1] || number[2] < number[0] && number[2] > number[1]) {
        middle = number[2];
    }
    printf("original data %d %d %d \n", number[0], number[1], number[2]);
    printf("assending data %d %d %d",  min, middle, max);
}
