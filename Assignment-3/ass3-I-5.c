#include<stdio.h>


int main()
{
   
   int i=1, num,fact=1;


    printf("Enter the number:");
	scanf("%d",&num);

	while(i<=num)
	{
		fact=fact*i;
	    
		i++;
	}
	 
	 	printf("Factorial of number is ::%d",fact);



	return 0;
}
