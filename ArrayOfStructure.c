#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll_no;
    float marks;     
};
int main(void)
{
   int i;
   struct student stuarr[10];
   for(i=0;i<10;i++)
   {
       printf("Enter name,roll and marks");
       scanf("%s%d%f",stuarr[i].name,&stuarr[i].roll_no,&stuarr[i].marks);        
   }	   
   for(i=0; i<10 ;i++)
             printf("%s %d %f\n",stuarr[i].name,stuarr[i].roll_no,stuarr[i].marks);
   return 0;              
}
