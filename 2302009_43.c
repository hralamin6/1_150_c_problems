#include <stdio.h>
main(){
    int row, coloumn, x=1;
    printf("Input number of lines: ");
    scanf("%d", &row);
    printf("Input number of columns: ");
    scanf("%d", &coloumn);
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= coloumn; j++) {
            printf("%d \t", x);
            x++;
        }
        printf("\n");
    }
}
