#include<stdio.h>


int main() 

{
   int i=1,n;
   printf("Enter th number::\n");
   scanf("%d",&n);
   
   int fact=1;

   while(i<=n)
   {

       fact=i*fact;

		i++;
   }
	printf("Factorial is ::%d",fact);
return 0; 
}
