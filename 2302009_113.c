#include <stdio.h>
main(){
    for (int a=1, b=100; b>=0; a+=5, b-=10) {
        printf("a=%d b=%d\n",a,b);
    }
}
