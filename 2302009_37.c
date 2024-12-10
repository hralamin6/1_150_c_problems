#include <stdio.h>
main(){
    int x, y;
    printf("enter a coordinates (x, y): ");
    scanf("%d %d", &x, &y);
    if (x >0 & y>0) {
        printf("first coordinate");
    }else if (x < 0 & y>0) {
        printf("second coordinate");
    }else if (x < 0 & y<0) {
        printf("third coordinate");
    }else if (x > 0 & y<0) {
        printf("forth coordinate");
    }else {
        printf("center point");
    }
}

