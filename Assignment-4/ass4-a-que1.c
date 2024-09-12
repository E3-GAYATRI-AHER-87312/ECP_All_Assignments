#include<stdio.h>

int fun_fact(int);

int main()
{
      int num,result;

	  printf("Enter the number:");
	  scanf("%d",&num);

		result=fun_fact(num);

		return 0;
}


int fun_fact(int num)
{

   int fact=1;

   for(int i=1;i<=num;i++)
   {	
		fact=fact*i;
   } 
   
   printf("Factorial of number is : %d",fact);

}
