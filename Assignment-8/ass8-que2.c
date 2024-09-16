/*
Write a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.
*/
#include<stdio.h>
typedef struct student{
         char name[20];
		 int rollno;
		 float marks;
		 char address[20];
}stud_t;

void accept_number(stud_t*);
void print_number(stud_t);

int main()
{

stud_t s1;

accept_number(&s1);
print_number(s1);
}


void accept_number(stud_t *s1)
{


  int ptr;
printf("\nEnter name:");
scanf("%s",s1->name);

printf("\nEnter rollno:");
scanf("%d",&s1->rollno);


printf("\nEnter marks:");
scanf("%f",&s1->marks);


printf("\nEnter address:");
scanf("%s",s1->address);
}

void print_number(stud_t s)
{

printf("name=%s\n rollno=%d\n marks=%f\n address=%s\n",s.name,s.rollno,s.marks,s.address);

}
