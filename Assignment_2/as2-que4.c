#include<stdio.h>
int main()

{
	int n1,n2;

	printf("Enter the numbers:");
	scanf("%d%d",&n1,&n2);

	if(n1>n2)
	{
		printf("First number is maximum %d\n",n1);
	}else
	{
		printf("Second number is maximum %d\n",n2);
	}


	return 0;
}

