#include <stdio.h>
main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number>=0) {
        if(number%2==0) {
            printf("%d is an positive even number",number);
        }else {
            printf("%d is an positive odd number",number);
        }
    }else {
        if(number%2==0) {
            printf("%d is an negative even number",number);
        }else {
            printf("%d is an negative odd number",number);
        }
    }
}
