#include<stdio.h>


int fun_fact(int num);
int main()
{
  
  int num,res;
  printf("Enter the number:");
  scanf("%d",&num);

  res=fun_fact(num);

  printf("Factorial of number is %d \n",res);

	return 0;
}

int fun_fact(int num)
{
	int fact=1;

	for(int i=1;i<=num;i++)
	{
		fact=fact*i;

	}
//	printf("Factorial of number is ::%d",fact);
	
return fact;
}




