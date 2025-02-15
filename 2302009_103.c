#include <stdio.h>
int main(){
    int a, b, max, min;
    printf("Please input two numbers: ");
    scanf("%d%d", &a, &b);
    max = a>b?a:b;
    min = a<b?a:b;
    if (max%min == 0) {
        printf("multiply able");
    }else {
        printf("not multiply able");
    }
}
