#include<stdio.h>


int main()

{
  int num,rev=0,rem,temp;

  printf("Enter the 5 digits number:");
  scanf("%d",&num);

  temp=num;

  while(temp!=0)

  {
	rem=temp%10;
	rev=rev*10+rem;
	temp/=10;
   

  };
if(num==rev)

{
    printf("Num is palimdrome");  
 }


  else
  {
     printf("Num is not palimdrome");
  }
//printf("%d",num);		
   
  return 0;
}
