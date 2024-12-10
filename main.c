 #include <math.h>
 #include <stdio.h>

 int main() {

    // parimeter and radius of circle
    // float radius, parimeter, area;
    // printf("Enter radius= ");
    // scanf("%f", &radius);
    // parimeter = 2 * radius*22.0/7.0;
    // area = 22.0/7 * radius * radius;
    // printf("parimeter = %.2f  \n", parimeter);
    // printf("area = %.2f  \n", area);


    //Write a C program to convert specified days into years, weeks and days.Note:Ignore leap year.
    // float days, year, month, week, day;
    // printf("Enter days= ");
    // scanf("%f", &days);
    // year = days / 365;
    // month = (((int) days) % 365)/30.0;
    // week = (((int) days) % 365)%30/7;
    // day = (((int) days) % 365)%30%7;
    // printf("Years= %.0f\n", year);
    // printf("Months= %.0f\n", month);
    // printf("Weeks= %.0f\n", week);
    // printf("Days= %.0f\n", day);


  //  Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
    // float item1Weight, item1Number, item2Weight, item2Number, sum, avg;
    // printf("Enter item1 weight and item1 number= ");
    // scanf("%f %f", &item1Weight, &item1Number);
    // printf("Enter item2 weight and item2 number= ");
    // scanf("%f %f", &item2Weight, &item2Number);
    // sum =  item1Weight * item1Number + item2Weight * item2Number;
    // avg = sum / (item1Number + item2Number);
    // printf("Average weight is %.2f\n", avg);

   // Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
    // float id, working_hour, salary_per_hour, monthly_salary;
    // printf("Enter your id: ");
    // scanf("%f", &id);
    // printf("Enter your working hour: ");
    // scanf("%f", &working_hour);
    // printf("Enter your salary per hour: ");
    // scanf("%f", &salary_per_hour);
    // monthly_salary = working_hour * salary_per_hour * 30;
    // printf("Employees ID = %.0f \n", id);
    // printf("Salary is: %.2f\n", monthly_salary);

   // Write a C program that accepts three integers and finds the maximum of three.Test Data :
    // int a, b, c, max, result;
    // printf("Please enter three integers: ");
    // scanf("%d %d %d", &a, &b, &c);
    // if (a > b && a > c) {
    //     max = a;
    // }else if (b > a && b > c) {
    //     max = b;
    // }else if (c > a && c > b) {
    //     max = c;
    // }

    // result = (a + b + abs(a - b)) / 2;
    // max = (result + c + abs(result - c)) / 2;
    
    // printf("max: %d\n", max);

    //Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
    // int input[10], count_positive=0, sum_of_positive=0;
    // float avg_of_positive;
    // for (int i = 0; i < 5; i++) {
    //     scanf("%d", &input[i]);
    // }
    // for (int i = 0; i < 5; i++) {
    //     if (input[i] >= 0) {
    //         count_positive++;
    //         sum_of_positive += input[i];
    //     }
    // }
    // avg_of_positive = ((float) sum_of_positive) / count_positive;
    // printf("avarage of positive numbers: %.2f\n", avg_of_positive);

//Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
    // int n;
    // printf("Enter a number (1-100): ");
    // scanf("%d", &n);
    // for (int i = 1; i <= 100; i++) {
    //     if (i % n == 3) {
    //         printf("%d\n", i);
    //     }
    // }

    //Write a C program that accepts some integers from the user and finds the highest value and the input position.
    // int input[5], max=0, max_position;
    // printf("Enter 5 numbers: ");
    // for (int i = 0; i < 5; i++) {
    //     scanf("%d", &input[i]);
    // }
    // for (int i = 0; i < 5; i++) {
    //     if (input[i] > max) {
    //         max = input[i];
    //         max_position = i+1;
    //     }
    // }
    // printf("max: %d\n", max);
    // printf("max position: %d\n", max_position);


    //Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, "Correct password" and quit the program. The correct password is 1234.
    // int password;
    // printf("Enter your password: ");
    // scanf("%d", &password);
    // while (password != 1234) {
    //         printf("Your password is wrong.\n");
    //     printf("Enter again: ");
    //     scanf("%d", &password);
    // }
    // if (password==1234) {
    //     printf("Your password is correct.\n");
    // }

    //Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
    // printf("enter a coordinates (x, y)");
    // int x, y;
    // scanf("%d %d", &x, &y);
    // if (x >= 0 & y>=0) {
    //     printf("first coordinate");
    // }else if (x < 0 & y>=0) {
    //     printf("second coordinate");
    // }else if (x < 0 & y<0) {
    //     printf("third coordinate");
    // }else if (x >= 0 & y<0) {
    //     printf("forth coordinate");
    // }else {
    //     printf("center point");
    // }


    //Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
    // printf("Enter two integers:\n");
    // int n1, n2, temp;
    // scanf("%d %d", &n1, &n2);
    // if (n1 > n2) {
    //     temp = n2;
    //     n2 = n1;
    //     n1 = temp;
    // }
    // for (int i = n1; i <= n2; i++) {
    //     if ((i % 7) == 2 || (i % 7) == 3 ) {
    //         printf("%d\n", i);
    //     }
    // }


    //Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
    // int rows, coloumns, numbers=0;
    // printf("Enter rows: ");
    // scanf("%d", &rows);
    // printf("Enter columns: ");
    // scanf("%d", &coloumns);
    // numbers = rows * coloumns;
    // for (int i = 1; i <= numbers; i++) {
    //     printf("%d ", i);
    //     if (i % coloumns == 0) {
    //         printf("\n");
    //     }
    // }


   //Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
    // int rows, coloumns, numbers=0;
    // printf("Enter rows: ");
    // scanf("%d", &rows);
    // printf("Enter columns: ");
    // scanf("%d", &coloumns);
    // numbers = rows * coloumns;
    // for (int i = 1; i <= rows; i++) {
    //     printf("%d ", i);
    //     printf("%d ", i*i);
    //     printf("%d ", i*i*i);
    //     printf("\n");
    // }

    //Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
    // float s=0, j=1;
    // for (int i = 1; i <= 7; i=i+2) {
    //     s += i/j;
    //     j=j*2;
    // }
    // printf("\n sum : %.2f\n", s);


    //Write a C program that finds all the divisors of an integer.
    // int n;
    // printf("Please enter a number: ");
    // scanf("%d", &n);
    // for (int i = 1; i <= (n); i++) {
    //     if (n % i == 0) {
    //         printf("%d ", i);
    //     }
    // }


    // Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
    // int myArray[5];
    // printf("Enter Array Elements: ");
    // for (int i = 0; i < 5; i++) {
    //     printf("Array[%d]: ", i);
    //     scanf("%d", &myArray[i]);
    // }
    // for (int i = 0; i < 5; i++) {
    //     if (myArray[i] <= 0) {
    //         myArray[i] = 100;
    //     }
    //     printf("Array[%d]: %d\n", i, myArray[i]);
    // }


    //Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple of the previous position, starting from the second position.
    // int n, numbers[5];
    // printf("Enter starting of array: ");
    // scanf("%d", &n);
    // numbers[0] = n;
    //
    // for (int i = 0; i < 5; i++) {
    //     if (i==0) {
    //         printf("%d\n", numbers[i]);
    //         continue;
    //     }
    //     numbers[i] = numbers[i-1] * 3;
    //     printf("%d\n", numbers[i]);
    // }


    // write a c programme of two variable exchange without third variable
    // int x=5, y=7;
    // x=x+y;
    // y=x-y;
    // x=x-y;
    // printf("x=%d\n", x);
    // printf("y=%d\n", y);

    // int t, n;
    // printf("enter number of line: ");
    // scanf("%d", &t);
    // for (int i= 1; i<=t; i++){
    //     printf("enter a number: ");
    //     scanf("%d", &n);
    //     if(n%2==0){
    //         printf("even \n");
    //     }else{
    //         printf("odd \n");
    //
    //     }
    // }



    //In this problem, you will be given T testcases. Each line of the testcase consists of an integer n. We just have to print * in n rows and n columns.
    // int rows, cols;
    // printf("Enter number of rows: ");
    // scanf("%d", &rows);
    // printf("Enter number of columns: ");
    // scanf("%d", &cols);
    // for (int col = 0; col < rows; col++) {
    //     for (int row = 0; row < cols; row++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

// পাঁচ অঙ্কের একটি সংখ্যার প্রথম ও শেষ অঙ্কের যোগফল নির্ণয় করার প্রোগ্রাম লিখতে হবে।
    // int number = 12345;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // int  lastDigit = number%10;
    // while (number >= 10) {
    //     number /= 10;
    // }
    // int firstDigit = number;
    // printf("sum of first and last digit is: %d+%d=%d", firstDigit, lastDigit, firstDigit+lastDigit);


    // int rows, count;
    // char line[100];
    // int inNumber = 0;
    //
    // // printf("Enter the number of rows : ");
    // fgets(line, sizeof(line), stdin);
    // for (int i = 0; line[i] != '\0'; i++) {
    //     if (isdigit(line[i])) {
    //         if (inNumber == 0) {
    //             inNumber=1;
    //             count++;
    //         }
    //     } else {
    //         inNumber = 0;     // সংখ্যা শেষ হলে inNumber কে ০ সেট করে দিচ্ছি
    //     }
    // }
    // printf("%d", count);



    //Area of a circle
    // printf("Enter the radious of circle: ");
    // double radious;
    // scanf("%lf", &radious);
    // double area = 22.0/7 * radious * radious;
    // printf("The area of the circle is %lf\n", area);


    // double a, b, c, x1, x2;
    // printf("enter value of a: ");
    // scanf("%lf", &a);
    // printf("enter value of b: ");
    // scanf("%lf", &b);
    // printf("enter value of c: ");
    // scanf("%lf", &c);
    // if (b*b-4*a*c<0) {
    //     printf("error (unreal number)");
    // }else {
    //     x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    //     x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    //     printf("x1 = %lf\n", x1);
    //     printf("x2 = %lf\n", x2);
    // }

// simple interest
    // double p, n, r, i;
    // printf("Enter value of p: ");
    // scanf("%lf", &p);
    // printf("Enter value of n: ");
    // scanf("%lf", &n);
    // printf("Enter value of r: ");
    // scanf("%lf", &r);
    // i=p*n*r/100.0;
    // printf("Interest is: %lf", i);

// compounded interest
    // double A, p, n, r, I;
    // printf("Enter value of p: ");
    // scanf("%lf", &p);
    // printf("Enter value of n: ");
    // scanf("%lf", &n);
    // printf("Enter value of r: ");
    // scanf("%lf", &r);
    // A = p *  (pow(1.0+r/100.0, n));
    // I = A-p;
    // printf("compounded interest I = %lf\n", I);

//find the sum of the digits of a number (three)
    // int number, firstNumber, lastNumber, middleNumber, sum=0;
    // printf("Enter a number of three digits: ");
    // scanf("%d", &number);
    // if (number > 999 || number < 1000) {
    //     printf("This number does not contain three digits");
    // }else {
    //     firstNumber = number/100;
    //     middleNumber = (number/10)%10;
    //     lastNumber = number%10;
    //     printf("first number: %d \n", firstNumber);
    //     printf("middle number: %d\n", middleNumber);
    //     printf("last number: %d \n", lastNumber);
    //     sum = firstNumber + middleNumber + lastNumber;
    //     printf("The sum of three digits is %d", sum);
    // }

    //leepyear
    // int year;
    // printf("Enter a year: ");
    // scanf("%d", &year);
    // if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    //     printf("This is a leap year.\n");
    // }else {
    //     printf("This is not a leap year.\n");
    // }

// marksheet
    // double mark;
    // printf("Enter mark: ");
    // scanf("%lf", &mark);
    // if (mark >= 90) {
    //     printf("O");
    // }else if (mark >= 80) {
    //     printf("E");
    // }else if (mark >= 70) {
    //     printf("A");
    // }else if (mark >= 60) {
    //     printf("B");
    // }else if (mark >= 50) {
    //     printf("C");
    // }else if (mark >= 40) {
    //     printf("D");
    // }else if (mark < 40) {
    //     printf("F");
    // }

    //wheter three point is in straight line
    // double x1, y1, x2, y2, x3, y3, m1, m2;
    // printf("Please enter the first coordinate of x1: ");
    // scanf("%lf", &x1);
    // printf("Please enter the second coordinate of y1: ");
    // scanf("%lf", &y1);
    // printf("Please enter the first coordinate of x2: ");
    // scanf("%lf", &x2);
    // printf("Please enter the second coordinate of y2: ");
    // scanf("%lf", &y2);
    // printf("Please enter the first coordinate of x3: ");
    // scanf("%lf", &x3);
    // printf("Please enter the second coordinate of y3: ");
    // scanf("%lf", &y3);
    // m1 = (y1-y2)/(x1 - x2);
    // m2 = (y2-y3)/(x2 - x3);
    // if (m1 == m2) {
    //     printf("three point in same straight line");
    // }else {
    //     printf("three point in different lines");
    // }


   // Write a C program to convert specified days into years, weeks and days.Note:Ignore leap year.
     // float days, year, month, week, day;
     // printf("Enter days= ");
     // scanf("%f", &days);
     // year = days / 365;
     // month = (((int) days) % 365)/30.0;
     // week = (((int) days) % 365)%30/7;
     // day = (((int) days) % 365)%30%7;
     // printf("Years= %.0f\n", year);
     // printf("Months= %.0f\n", month);
     // printf("Weeks= %.0f\n", week);
     // printf("Days= %.0f\n", day);


    //find year month and date from birth date
    // int birthYear=2000, birthMonth=0, birthDay=0;
    // int currentYear=2024, currentMonth=11, currentDay=19;
    // int month[100]={30,31,30,31,29,31,32};
    // if(birthDay<currentDay) {
    //     currentDay=currentDay+currentDay(month-1);
    //     month[100]=month[100]-1;
    //     currentMonth=currentMonth-1;
    //
    // }
    //
    // int year=0, month=0, day=0;
    // printf("Enter your birth year: ");
    // scanf("%d", &birthYear);
    // printf("Enter your birth month: ");
    // scanf("%d", &birthMonth);
    // printf("Enter your birth day: ");
    // scanf("%d", &birthDay);
    //
    // day = currentDay - birthDay;
    // month = currentMonth - birthMonth;
    // year = currentYear - birthYear;
    // if (currentDay<birthDay) {
    //     month--;
    //     day+=30;
    // }
    // if (currentMonth<birthMonth) {
    //     year--;
    //     month+=12;
    // }
    // printf("Year: %d Month: %d Day: %d", year, month, day);




    //find the digits number of a number
    // int number, count;
    // printf("Enter a number of three digits: ");
    // scanf("%d", &number);
    // while (number != 0) {
    //
    // }















    //Avg of three numbers
    // double num1, num2, num3, sum, avg;
    // printf("Enter first number: ");
    // scanf("%lf", &num1);
    // printf("Enter second number: ");
    // scanf("%lf", &num2);
    // printf("Enter third number: ");
    // scanf("%lf", &num3);
    // sum = num1 + num2 + num3;
    // avg = sum / 3.0;
    // printf("The sum is: %lf\n", sum);
    // printf("The avg is: %lf\n", avg);

    //dividing one number
    // double a, b, c;
    // printf("Enter the value of a: ");
    // scanf("%lf", &a);
    // printf("Enter the value of b: ");
    // scanf("%lf", &b);
    // if (a!=0) {
    //     c=a/b;
    //     printf("a/b = %lf\n", c);
    // }else {
    //     printf("a cant be 0");
    // }


    //find maximum of two numbers
    // double num1, num2, max=0;
    // printf("Enter num1: ");
    // scanf("%lf", &num1);
    // printf("Enter num2: ");
    // scanf("%lf", &num2);
    // max = num1 > num2 ? num1 : num2;
    // printf("The max is %lf\n", max);


    // double n, sum=0;
    // printf("Please enter a number: ");
    // scanf("%lf", &n);
    // for (int i = 1; i <= n; i++) {
    //     sum+=i;
    // }
    // printf("The sum of 0 to the given numbers is %lf\n", sum);


    // double n, sum=0;
    // printf("Please enter a number: ");
    // scanf("%lf", &n);
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 == 0) {
    //         sum+=i;
    //     }
    // }
    // printf("The sum of 0 to the given numbers is %lf\n", sum);




     return 0;
 }
