#include <stdio.h>
main(){
   int a,b,c, perimeter;
   printf("Enter a number for a: ");
   scanf("%d",&a);
   printf("Enter a number for b: ");
   scanf("%d",&b);
   printf("Enter a number for c: ");
   scanf("%d",&c);
   if(a+c>b && a+b>c && b+c>a) {
      perimeter=a+b+c;
      printf("Perimeter = %d",perimeter);
   }else {
      printf("invalid input to create tringle");
   }
}
