#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node *next;
  };
int queue_operation_choose()
{
  int var=0;
  do
   {
    printf("enter 1 to enqueue\n");
    printf("enter 2 to dequeue\n");
    printf("enter 3 to exit the program\n");
    scanf("%d",&var);
    if(var != 1 && var != 2 && var !=3)
      printf("you entered invalid number \n again enter number\n");
    }while(var != 1 && var != 2 && var !=3);
   return var;
}
void enqueue(struct node **head,struct node **rear)
     {
       struct node *create=(struct node*)malloc(sizeof(struct node));
       if(create == NULL)
	  printf("memory not available for inserting element\n");
       else
	  {

            if(*head==NULL)
	      {
		 *head=create;
		 *rear=create;
	      }
	    else
	       {
		  (*rear)->next=create;
		  *rear=create;
	       }
	    (*rear)->next=NULL;
	    printf("enter data\n");
	    scanf("%d",&((*rear)->data));
	   }
     }
 void dequeue(struct node **head,struct node **rear,struct node **front)
     {   
	 printf("deleted element is %d\n",(*head)->data);
	 if(*head==*rear)
	   {
	     free(*head);
	     *head=NULL;
	     *rear=NULL;
           }
	 else
           {
	     *front=*head;
	     *head=(*head)->next;
             free(*front);
	   }
     }

int main()
{
 struct node *front,*rear,*head;
 head=NULL;
 front=NULL;
 rear=NULL;
 ACT:
 int n=queue_operation_choose();
 switch(n)
  {
    case 1:
          enqueue(&head,&rear);
          goto ACT;
    case 2:
	  if (head == NULL)
	     printf("queue is empty\n");
          else
             dequeue(&head,&rear,&front);
          goto ACT;
    case 3:
           exit(0);
  }
return 0;
}
