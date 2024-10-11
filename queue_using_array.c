#include<stdio.h>
#include<stdlib.h>
int queue_operation_choose()
{
  int var=0;
  do
   {
    printf("enter 1 to enqueue\n");
    printf("enter 2 to dequeue\n");
    printf("enter 3 to exit the program\n");
    scanf("%d",&var);
    if(var != 1 && var != 2 && var !=3 & var !=4)
      printf("you entered invalid number \n again enter number\n");
    }while(var != 1 && var != 2 && var !=3 && var !=4);
   return var;
}
void enqueue(int arr[],int *front,int *rear,int item,int max)
{ 
  if(*rear==max)
    *rear=-1;
  if(*front < *rear)
   {
     arr[*rear]=item;
     *rear=*rear+1;
   }
 else
  {
    (*rear)++;
    arr[*rear]=item;
    
  }

}
void dequeue(int arr[],int *front,int *rear,int max)
   {
     (*front)++;
     if(*front == max)
       {
       *front=0;
       (*rear)++;
       }
     printf("deleted element is %d\n",arr[*front]);
   }
      

int isqueuefull(int front,int rear,int max)
   {
    if((front==-1 && rear==max) || (rear==front))
      return 1;
    else 
      return 0;
   }
int isqueueempty(int front,int rear)
  {
    if(front==rear-1)
        return 1;
    else return 0;
  }
int main()
{
int max;
printf("enter size of array\n");
scanf("%d",&max);
int arr[max],front=-1,rear=0,item;
ACT:
int n=queue_operation_choose();
switch(n)
  {
    case 1:
	  {
          int x=isqueuefull(front,rear,max);
          if(x==1)
            printf("queue is full\n");
          else
           {
            printf("enter item\n");
            scanf("%d",&item);
            enqueue(arr,&front,&rear,item,max);
           }
	  }
          goto ACT;
    case 2:
	  {
          int x=isqueueempty(front,rear);
          if(x==1)
            printf("queue is empty\n");
          else
            dequeue(arr,&front,&rear,max);
	  }
          goto ACT;
    case 3:
           exit(0);
  }
return 0;
}
