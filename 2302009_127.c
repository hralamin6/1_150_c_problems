#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }else if (y>x) {
        return gcd(y, x);
    }else {
        return gcd(y, x%y);
    }

}
int main() {
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // if (n%2==0) {
    //     printf("\n%d is even", n);
    // }else {
    //     printf("\n%d is odd", n);
    // }


    // int year;
    // printf("Enter Year: ");
    // scanf("%d", &year);
    // if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    //     printf("%d is a leap year", year);
    // }else {
    //     printf("%d is not a leap year", year);
    // }


    // int weight;
    // printf("Enter Weight: ");
    // scanf("%d", &weight);
    // if (weight > 170 ) {
    //     printf("Overweight");
    // }else if (weight >= 150 && weight <= 170 ) {
    //     printf("Normal");
    // }else if (weight < 150 ) {
    //     printf("Underweight");
    // }else {
    //     printf("Something went wrong!");
    // }


    // int math, physics, chemistry;
    // printf("Enter math: ");
    // scanf("%d", &math);
    // printf("Enter physics: ");
    // scanf("%d", &physics);
    // printf("Enter chemistry: ");
    // scanf("%d", &chemistry);
    // int total = math + physics + chemistry;
    // printf("The total is: %d\n", total);
    // printf("Math + physics: %d", math+physics);
    // if (math >= 60 && physics >= 55 && chemistry >= 45 && (total >= 155 || math + physics >=110)) {
    //     printf("\n Eligible");
    // }else {
    //     printf("\n Not eligible");
    // }

    // int month_number;
    // printf("Enter month number: ");
    // scanf("%d", &month_number);
    // if (month_number ==1 || month_number == 3 || month_number== 5|| month_number==7||month_number==8||month_number==10||month_number==12) {
    //     printf("month has 31 days");
    // }else if(month_number==2){
    //     printf("month has 28 days");
    // }else if(month_number==month_number ==4 || month_number == 6 || month_number== 9|| month_number==11) {
    //     printf("month has 30 days");
    // }else {
    //     printf("invalid month number");
    // }

    // double unit, bill=0;
    // printf("Enter unit: ");
    // scanf("%lf", &unit);
    // if (unit <= 99) {
    //     bill = unit*1.5;
    // }else if (unit >= 100 && unit <= 299) {
    //     bill = unit*1.75;
    // }else if (unit >= 300 && unit <= 499) {
    //     bill = unit*1.9;
    // }else if (unit >= 500 && unit <= 799) {
    //     bill = unit*2.0;
    // }else if (unit >= 800) {
    //     bill = unit*2.1;
    // }
    // if (bill > 1000) {
    //     bill += bill*0.1;
    // }else if (bill < 100) {
    //     bill = 100;
    // }
    // printf("your bill is: %.1lf", bill);

    int a,b, max, min;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    min=a<b?a:b;
    int GCD;
    while(min>1) {
        min = max%min==0?min:max%min;
        printf("d");
    }
    printf("GCD of %d & %d is: %d",a,b, min);
    // printf("GCD of %d & %d is: %d",a,b, gcd(a, b));

    // for (int i=1; i<=100; i++) {
    //     if (i%6==0 && i%4!=0) {
    //         printf("%d\n", i);
    //     }
    // }

    // double a, b, c, max;
    // scanf("%lf %lf %lf", &a, &b, &c);
    // max = (a+b+abs(a-b))/2.0;
    // max = (max+c+abs(max-c))/2.0;
    // printf("max: %.2lf\n", max);

}
