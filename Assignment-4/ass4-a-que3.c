#include<stdio.h>

int fun_add(int,int,char);
int fun_sub(int,int,char);
int fun_multi(int,int,char);
int fun_divi(int,int,char);


int main()
{
   
	int num1,num2;
	char op;

	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("Enter 2nd number:");
	scanf("%d",&num2);
    
	printf("Enter operator (+ , - , * , /)::");
	scanf("%d",&op);



  return 0;
}

 int fun_add(int num1,int num2,char op)
{

    return num1+num2;
}
 int fun_sub(int num1,int num2,char op)
 {

    return num1-num2;	
 }
 int fun_multi(int num1,int num2,char op)
{

  return num1*num2;
}
 int fun_divi(int num1,int num2,char op)
 {

   return num1/num2;
 }
