#include <stdio.h>
main(){
    int given_days, years, months, days;
    printf("Enter days= ");
    scanf("%d", &given_days);
    years = given_days / 365;
    given_days = given_days % 365;
    months = given_days / 30;
    given_days = given_days % 30;
    days = given_days;
    printf("Years= %d\n", years);
    printf("Weeks= %d\n", months);
    printf("Days= %d\n", days);
}
