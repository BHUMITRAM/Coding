#include<stdio.h>
#include<stdlib.h>
struct node
  {
   int data;
   struct node *ptr;
  };
struct node *head;
int action()
{ 
 int var=0;
 do  
{ 
  printf("enter 1 for push on stack\n"); 
  printf("enter 2 for pop from stack\n"); 
  printf("enter 3 for peek from stack\n");   
  printf("enter 4 for display of stack\n");
  printf("enter 5 for exit the program\n");
  scanf("%d",&var);
  if (var != 1 && var != 2 && var !=3 && var != 4 && var != 5)
    printf("you entered invalid number \n again enter the number \n");
} while(var != 1 && var !=2 && var !=3 && var !=4 && var !=5);
  return var;
}
void push(struct node *p)
{ 
     struct node *create;
     create=(struct node*)malloc(sizeof(struct node));

  if(p==NULL)
   {
     if (create)
       {
         head=create;
         printf("push data\n");
         scanf("%d",&head->data);
         head->ptr=NULL;
       }
     else
       printf("memory not available \n");
   }
  else
   {
     while(p->ptr!=NULL)
      {
       p=p->ptr;
      }
     if (create)
      {
       p->ptr=create;
       p=p->ptr;
       printf("push data\n");
       scanf("%d",&p->data);
       p->ptr=NULL;
      }
     else
       {
         printf("memory not available\n");
       }
   }
  }
 
void pop(struct node *p)
  {
   if(p->ptr == NULL)
     {
       free(head);
       head=NULL;
     }
   else
     {
       while(p->ptr->ptr != NULL)
           p=p->ptr;
       free(p->ptr);
       p->ptr=NULL ;
     }
  }

void peek(struct node *p)
  {
  if (p == NULL)
     printf("no element on stack\n");
  else
   {
   while(p->ptr != NULL)
     p=p->ptr;
   printf("top element is %d\n",p->data);
   }
  } 
 void display(struct node *p)
   {
     if(p == NULL)
         printf("no element on stack\n");
     else
        {
          while(p != NULL)
            {
             printf("%d ",p->data);
             p=p->ptr;
            }
          printf("\n");
        }
   }
int main()
{
 head=NULL;
 ACT:
 int act=action();
 switch(act)
  {
    case 1:
           
           push(head);
           goto ACT;
    case 2:
           if(head != NULL)
               pop(head);
           else
             printf("stack underflow\n");
           goto ACT;
    case 3:
           peek(head);
           goto ACT;
    case 4:
           display(head);
           goto ACT;
    case 5:
           exit(0);
  }
return 0;
}
