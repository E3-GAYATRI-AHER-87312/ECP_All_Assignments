/*5. Write a function to print a given character for a given number of times.*/


#include<stdio.h>
int main()
{
  	int num;
  	char ch;

	printf("Enter the num:");
	scanf("%d",&num);

	printf("Enter the char:");
	scanf("%*c%c",&ch);

		for(int i=1;i<=num;i++)
			{
				printf("%c\n",ch);
			}

return 0;

}
