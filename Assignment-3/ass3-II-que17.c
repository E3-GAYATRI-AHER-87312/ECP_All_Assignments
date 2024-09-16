#include<stdio.h>


int main()

{

	int i,j,row,col;

    printf("Enter the number of rows::\n");
	scanf("%d",&row);
	printf("Enter the number of column::");
	scanf("%d",&col);
    
	for(i=0;i<=row;i++)
    {
	   
	    printf("\n");
	    for(j=0;j<=col;j++)

		{

			printf("* ");

		}


	}

  




	return 0;
}
