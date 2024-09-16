/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.
*/


#include<stdio.h>
typedef struct student{
              char name[20];
			  int rollno;
			  float marks;
}stud_t;


void accept_number(stud_t*);
void print_number(stud_t);
int main()
{
   	stud_t s1;

 	accept_number(&s1);
    print_number(s1);
}


void accept_number(stud_t *ptr)
{
printf("\nEnter the name:");
scanf("%s",ptr->name);


printf("\nEnter the rollno:");
scanf("%d",&ptr->rollno);


printf("\nEnter the marks:");
scanf("%f",&ptr->marks);
}

void print_number(stud_t s)
{
printf("name=%s\n rollno=%d\n marks=%f\n",s.name,s.rollno,s.marks);

}


