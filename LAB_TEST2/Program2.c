#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  char name[10];
  float cost;
  struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
if(x==NULL)
 {
  printf("mem full\n");
  exit(0);
 }
 return x;
}

void freenode(NODE x)
{
    free(x);
}
NODE insert_front(float cst,char name[10],NODE first)
{
    NODE temp;
    temp=getnode();
    temp->cost=cst;
for(int i=0;i<10;i++)
{
    temp->name[i]=name[i];
}
temp->link=NULL;
if(first==NULL)
    return temp;
temp->link=first;
    first=temp;
    return first;
}
NODE delete_front(NODE first)
{
NODE temp;
if(first==NULL)
{
    printf("stack is empty cannot delete\n");
    return first;
}
temp=first;
temp=temp->link;
printf("item deleted at front-end is=%s\n",first->name);
free(first);
return temp;
}

void display(NODE first)
{
 NODE temp;
 if(first==NULL){
 printf("stack empty cannot display items\n");return ;}
 for(temp=first;temp!=NULL;temp=temp->link)
  {
  printf("%s\n",temp->name);
  printf("%.2f\n",temp->cost);
  }
}

int main()
{
    int choice,pos;
    float cost;
    char name[10];
    NODE first=NULL;

for(;;)
{
printf("\n 1:Insert Item\n 2:Delete Item\n 3:Display_Items with prices\n 4:Exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
 {
  case 1:printf("enter the item at front-end\n");
	 scanf(" %s",name);
	 printf("cost of item\n");
	 scanf("%f",&cost);
	 first=insert_front(cost,name,first);
	 break;
  case 2:first=delete_front(first);
	 break;
  case 3:display(first);
	 break;
 default:exit(0);
	 break;
 }
}
}
