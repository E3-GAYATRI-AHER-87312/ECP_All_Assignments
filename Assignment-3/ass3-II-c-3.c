#include<stdio.h>

int main()
{
    

	int num;
	int temp,rem ,rev=0;

	printf("Enter the number:");
	scanf("%d",&num);

	temp=num;

	while(num>0)
	{
      rem=num%10;
	  rev=rev*10+rem;
	  num=num/10;


	}
	if(temp==rev)
	{
		printf("\n Given number is palimdrome");
	}
    else
	{
 		printf("Given number is not palimdrome");
	}
	
	return 0;
}
