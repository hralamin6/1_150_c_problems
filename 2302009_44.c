#include <stdio.h>
main(){
    int mark[10], sum=0, count=0;
    float average;
    for(int i = 0; ; i++) {
        printf("Input Mathematics marks (0 to terminate): ");
        scanf("%d", &mark[i]);
        if(mark[i] <= 0){break;}
        count++;
        sum+=mark[i];
    }
    average = (float) sum/count;
    printf("Average = %.2f", average);
}


