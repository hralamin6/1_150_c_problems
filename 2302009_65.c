#include <math.h>
#include <stdio.h>
int main(){
    int prime[100], n=200, count_divisiable=0, count_prime=0;
    int root_of_value = sqrt(n);
    for(int i=2;i<=n;i++) {
        count_divisiable=0;
        for(int j=2;j<=root_of_value;j++) {
            if(i%j==0 && i!=j) {
                count_divisiable++;
                break;
            }
        }
        if (count_divisiable<1) {
            count_prime++;
            printf("%d ",i);
            if (count_prime%10==0) {
                printf("\n");
            }
        }
    }
}
