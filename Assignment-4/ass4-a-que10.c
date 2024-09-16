#include<stdio.h>

int check(int,int);

int main()
{
	int num1,num2;
	printf("The ranges from num1:");
    scanf("%d",&num1);
    printf("The ranges to num2:");
	scanf("%d",&num2);
	int res=printf(check(num1,num2));
	printf("%d",res);
	}

	int check(int num1,int num2)
	{
		int i,count=0;
		while(num1<=num2 && num2!=0)
		for(int i=2;i<=num2;i++)
			{
				if(num1%i==0)
			{
    			count++;
     			num1++;
 			}
    }
 
   if(num1%i==0 && count==1)
	{
          printf("%d",num1);
	}


}


