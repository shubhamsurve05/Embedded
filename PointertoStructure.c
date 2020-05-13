#include<stdio.h>
struct student
{
  char name[20];
  int rollno;
  int marks;   
};
int main(void)
{
  struct student stu={"Marry",25,68};
  struct student *ptr=&stu;
  printf("Name -%s\t",ptr->name);
  printf("Rollno -%d\t",ptr->rollno);
  printf("Marks - %d\n",ptr->marks);
  return 0;  
}
