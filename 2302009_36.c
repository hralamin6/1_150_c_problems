#include <stdio.h>
main(){
    int password;
    printf("Enter your password: ");
    scanf("%d", &password);
    while (password != 1234) {
            printf("Your password is wrong.\n");
        printf("Enter again: ");
        scanf("%d", &password);
    }
    if (password==1234) {
        printf("Your password is correct.\n");
    }
}

