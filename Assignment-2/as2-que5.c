#include<stdio.h>
int main()

{
	int n1,n2,n3;

	printf("Enter three numbers:");
	scanf("%d\n%d\n%d",&n1,&n2,&n3);

	if((n1>n2) && (n1>n3))
	{
		printf("First number is maximum %d\n",n1);
	}else if((n2>n1)&&(n2>n3))
	{
		printf("Second number is maximum %d\n",n2);
	}else

	{
		printf("Third number is Maximum %d\n",n3);
	}


	return 0;
}

