#include <stdio.h>
main(){
    char id[100];
    float working_hour, salary_per_hour, salary;
    printf("Enter your id: ");
    scanf("%s", id);
    printf("Enter your working hour: ");
    scanf("%f", &working_hour);
    printf("Enter your salary per hour: ");
    scanf("%f", &salary_per_hour);
    salary = working_hour * salary_per_hour;
    printf("Employees ID = %s \n", id);
    printf("Salary is: %.2f\n", salary);

    }
