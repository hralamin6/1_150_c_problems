#include <stdio.h>
main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (int i = 1; i <=100; i=i+1) {
        if(i%number==3) {
            printf("%d\n",i);
        }
    }
}