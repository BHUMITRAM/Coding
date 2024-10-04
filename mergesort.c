#include<stdio.h>
void merge(int arr[],int left,int mid, int right)
  {
   int n1,n2;
   n1=mid-left+1;
   n2=right-mid;
   int leftarray[n1];
   int rightarray[n2];
   for(int i=0;i<n1;i++)
    {
      leftarray[i]=arr[left+i];
      
    }
    for(int j=0;j<n2;j++)
      {
       rightarray[j]=arr[mid+1+j];
      }
   int i=0,j=0,k=left;
   while(i< n1 && j < n2)
      {
        if(leftarray[i] <= rightarray[j])
          {
            arr[k]=leftarray[i];
            i++;
           
          }
        else 
            {
              arr[k]=rightarray[j];
              j++;
           
            }
        k++;
      }
   while(i<n1)
       {
         arr[k]=leftarray[i];
         i++;
         k++;
       }
  while(j<n2)
      {
       arr[k]=rightarray[j];
       j++;
       k++;
      }
  }
void mergesort(int arr[],int left,int right)
  {
    if(left < right)
      {
        int mid=left+(right-left)/2;
        
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
      }
    
  }
int main()
{
  int arr[]={1,3,2,9,6,8,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  mergesort(arr,0,n-1);
  for(int i=0;i<n;i++)
     {
      printf("%d ",arr[i]);
     }
}
  
