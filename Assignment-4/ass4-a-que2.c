#include<stdio.h>
int power(int ,int);

int main()
{
int num,index,i;
printf("\nEnter the num:");
scanf("%d",&num);

printf("\nEnter the index:");
scanf("%d",&index);

int value=power(num,index);

printf("\nThe power of the given number is =%d\n",value);
 return 0;
 }

int power(int num,int index)
{
int value=1;
for(int i=1;i<=index;i++)
   {
		value=num*value;
  }
return value;
}
