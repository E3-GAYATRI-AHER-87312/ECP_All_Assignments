#include<stdio.h>

int main()
{

	int no1;

    printf("Enter the number:");
	scanf("%d",&no1);

	if(no1>0)

	{  
		printf("Number is Positive +ve\n");


	}else if(no1<0)
	{
		printf("Number is Negative -ve\n");

	}else
	{
        printf("Number is zero\n");
	}



return 0;

}
