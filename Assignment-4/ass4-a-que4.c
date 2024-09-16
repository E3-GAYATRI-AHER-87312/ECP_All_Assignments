#include<stdio.h>

int add(int,char,int );
int sub(int,char,int );
int mul(int,char,int );
int div(int,char,int );

int main()
{
	int res1,num1,num2;
	res1=0;
	char ch;
	printf("\nEnter the num1:");
	scanf("%d",&num1);

	printf("\nEnter the char:");
	scanf("%*c%c",&ch);

	printf("\nEnter the num2:");
	scanf("%d",&num2);


		if(ch=='+')
		{
        	 res1=add(num1,ch,num2);
		}
		else if(ch=='-')
		{
        	res1=sub(num1,ch,num2);
		}
		else if(ch=='*')
		{
      		res1=mul(num1,ch,num2);
		}
		else
		{
     		res1=div(num1,ch,num2);
		}

		printf("res=%d\n",res1);
}

int add(int num1,char ch,int num2)
{
return num1+num2;

}

int sub(int num1,char ch,int num2)
{
return num1-num2;
}

int mul(int num1,char ch,int num2)
{

return num1*num2;
}

int div(int num1,char ch,int num2)
{

if(num2!=0)
    {
   return  num1/num2;

   }
   else
   {
   printf("divide by zero error!");
   }
} 

