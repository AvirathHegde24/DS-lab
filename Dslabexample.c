#include<stdio.h>
    struct student
    {
    int id;
    int age;
    int marks;
    };
 
    
void accept_input(struct student s)
{
  printf("enter the id");
  scanf("%d",&s.id);
  printf("enter the age");
  scanf("%d",&s.age);
  
  printf("enter the marks");
  scanf("%d",&s.marks);
  
}

void display(struct student s)
{
  printf("sudent details are:\n");
  printf("Student ID - %d\t",s.id);
  printf("Student Age - %d\t",s.age);
  printf("Student Marks - %d\n",s.marks);
}

int main()
{
  struct student s[60];
  int n,i;
  
  printf("Please enter no. of students");
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
  {
     accept_input(s[i]);     
  }

for(i=0;i<n;i++)
  {
     display(s[i]);     
  }
  
  for(i=0;i<n;i++)
  {
      if((s[i].age>20) && (0<s[i].marks<=100))
          printf("data is valid\n");
  {
      if(s[i].marks>=65)
          printf("Student qualifies for admission\n");
      
  }
  }

  
  return 0;
  }
  
  
