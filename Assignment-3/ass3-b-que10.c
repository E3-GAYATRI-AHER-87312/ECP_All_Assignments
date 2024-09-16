#include<stdio.h>


int main()

{
   int num,i;

   printf("Enter the number:\n");
   scanf("%d",&num);
  
   printf("Table is:\n");

     for(i=1;i<=10;i++)
	 {
            
		int num1=num*i;

			printf("\t%d\n",num1);
	 }

   
   return 0;
}
