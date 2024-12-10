#include <stdio.h>
main(){
   int a,b;
   printf("Enter a number for a: ");
   scanf("%d",&a);
   printf("Enter a number for b: ");
   scanf("%d",&b);
   if(a>b && a%b==0 || b>a && b%a==0) {
      printf("Multiplied");
   }else {
      printf("Not multiplied");
   }
}
