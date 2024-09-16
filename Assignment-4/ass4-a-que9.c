#include<stdio.h>

int prime(int);

int main()
{
	int num1,num2;
	int num;

		printf("Enter the num:");
		scanf("%d",&num);
		printf("The ranges from num1:");
		scanf("%d",&num1);
		printf("The ranges to num2:");
		scanf("%d",&num2);

    check(num1,num2);

	int res=prime(num);
		if(res==1)
		{
		printf("\nnot prime;");
		}
		else
		{
		printf("\nprime");
		}
}


int prime(int num)

{
    	int i;
        int count =0;
		while(num!=0)
		for(int i=2;i<=num;i++)
		{
			if(num%i==0)
			count++;
			return 0;
		}

return 1;
}

int check(int num1,int num2)
{
	int i,count=0;
		while(num1<=num2 && num2!=0)
		for(int i=0;i<=num2;i++)
		{
			if(num1%i==0)
    		count++;
     		num1++;
        }
	   if(num1%i==0 && count==1)
       {

          printf("%d",num1);
       }
}


