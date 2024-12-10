#include <stdio.h>
main(){
    int given_days, years, weeks, days;
    printf("Enter days= ");
    scanf("%d", &given_days);
    years = given_days / 365;
    given_days = given_days % 365;
    weeks = given_days / 7;
    given_days = given_days % 7;
    days = given_days;
    printf("Years= %d\n", years);
    printf("Weeks= %d\n", weeks);
    printf("Days= %d\n", days);
}
