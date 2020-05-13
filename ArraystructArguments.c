#include<stdio.h>
#include<string.h>
struct student
{
  char name[20];
  int roll_no;
  int marks;  
};
void display(struct student);
void dec_marks(struct student stuarr[]);
int main(void)
{
  int i;
  struct student stuarr[3]={
	                      {"Marry",12,45},
			      {"John",67,45},
			      {"marry",23,89}  
	                   };
  dec_marks(stuarr);
  for(i=0;i<3;i++)
           display(stuarr[i]);
  return 0;   
}
void dec_marks(struct student stuarr[])
{
   int i;
   for(i=0;i<3;i++)
   stuarr[i].marks=stuarr[i].marks-10;         	   
}	
void display(struct student stu)
{
    printf("Name - %s\t",stu.name);
    printf("Rollno - %d\t",stu.roll_no);
    printf("Marks - %d\n",stu.marks);    
}
