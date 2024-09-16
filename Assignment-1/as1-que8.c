#include<stdio.h>


int main()

{
   int a,b,c,sum;
   float avg;

   printf("Enter three numbers:");
   scanf("%d\n%d\n%d",&a,&b,&c);
   
   sum=a+b+c;
   avg=sum/3;

   printf("Avrage of Three numbers is:%f",avg);

   return 0;

}
