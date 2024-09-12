#include<stdio.h>

int main()

{
	int num;

	printf("Enter the number:\n");
        scanf("%d",&num);  
	
	printf("Table is:");
	for(int i=1;i<=10;i++)
	{
		int table=i*num;
		printf("%d\n",table);
	}

}

