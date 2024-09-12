#include<stdio.h>

int main() {
 int a,b;
 float z;
 
 printf("Enter numerator :\n");
 scanf("%d",&a);
 printf("Enter denominator :\n");
 scanf("%d",&b);
 if (b == 0)
 {
    printf("Division by zero is not allowed \n");

	}
 else {
   z = a / b;
   printf ("%f", z);
 }
 return 0;
}


