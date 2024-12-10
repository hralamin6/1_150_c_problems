#include <stdio.h>
main(){
    int money, thousand, fiveHundred, twoHundred, oneHundred, fifty, twenty, ten, five, two, one;
    printf("Enter money= "); scanf("%d", &money);
    thousand = money / 1000;money = money % 1000;
    fiveHundred = money / 500;money = money % 500;
    twoHundred = money / 200;money = money % 200;
    oneHundred = money / 100;money = money % 100;
    fifty = money / 50;money = money % 50;
    twenty = money / 20;money = money % 20;
    ten = money / 10;money = money % 10;
    five = money / 5;money = money % 5;
    two = money / 2;money = money % 2;
    one = money / 1;
    printf("%d Note(s) of 1000 \n", thousand);
    printf("%d Note(s) of 500 \n", fiveHundred);
    printf("%d Note(s) of 200 \n", twoHundred);
    printf("%d Note(s) of 100 \n", oneHundred);
    printf("%d Note(s) of 50 \n", fifty);
    printf("%d Note(s) of 20 \n", twenty);
    printf("%d Note(s) of 10 \n", ten);
    printf("%d Note(s) of 5 \n", five);
    printf("%d Note(s) of 2 \n", two);
    printf("%d Note(s) of 1 \n", one);
    }
