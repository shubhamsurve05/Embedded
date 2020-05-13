#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;    
};
void display(struct student);
int main(void)
{
  struct student stu1={"John",12.87};
  struct student stu2={"Maryy",18.90};
  display(stu1);
  display(stu2);
  return 0;  
}
void display(struct student stu)
{
   printf("Name - %s\t",stu.name);
   printf("RollNo - %d\t",stu.name);
   printf("Marks - %d\n",stu.marks);   
}
