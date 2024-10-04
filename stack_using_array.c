#include<stdio.h>
#include<stdlib.h>
void push(int *top,int arr[],int element)
{
  *top=*top+1;
  arr[*top]=element;
}
void pop(int *top)
{
 *top=*top-1;
}
int isfull(int top,int max)
{
 if(top==max-1)
  {
   printf("stack overflow\n");
   return 1;
  }
 else
   return 0;
}
int isempty(int top)
{
 if (top ==-1)
   {
   printf("stack underflow\n");
   return 1;
   }
 else
   return 0;
}
int peek(int top,int arr[])
{
 if (top!=-1)
   return arr[top];
}
int action()
{
 printf("enter 1 for push on stack\n");
 printf("enter 2 for  pop from stack\n");
 printf("enter 3 for peek from stack\n");
 printf("enter 4 for display  stack\n");
 printf("enter 5 for exit the program\n");
 int var;
 do
 { 
  
  scanf("%d",&var);
  if (var != 1 && var != 2 && var != 3 && var != 4 && var != 5)
    printf("you entered invalid number \n again enter the number\n");
 }while(var != 1 && var != 2 && var != 3 && var != 4 && var != 5) ;
 
 
 return var;
}
int main()
{
int max=5;
int arr[max],top=-1;
int var=1;
ACT:
int act=action();
switch(act)
{
  case 1:
	  {
        int x=isfull(top,max);
        if (!x)
          {
           printf("push element\n");
           scanf("%d",&x);
	   push(&top,arr,x);
           
          }
	  }
       goto ACT;
  case 2:
         {
        int x=isempty(top);
        if(!x)
          { pop(&top);
            printf("popped element = %d\n ",arr[top+1]);
          }
         }	  
       goto ACT;
 case 3:
         {
        int x=isempty(top);
        if(!x)
          {
            printf("top element is %d\n",peek(top,arr));
          }
	  }
        goto ACT;
 case 4:
         {
        int x=isempty(top);
        if(!x)
           {
             for(int i=0;i<top+1;i++)
               printf("%d ",arr[i]);
             printf("\n");
           }
	  }
	  goto ACT;
 case 5:
        exit(0);
        
}

return 0;
}
