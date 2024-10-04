#include<stdio.h>
void swap(int *a,int *b)
{
	int swap=*a;
	*a=*b;
	*b=swap;



}
int partition(int arr[],int low,int high)
{
	int i=low-1;
	int j=low;
	int pivot=arr[high];
	for(j;j<=high-1;j++)
	{
	if(arr[j]<pivot)
	{
          i++ ;
	  swap(&arr[i],&arr[j]);

	}
	}
	swap(&arr[i+1],&arr[high]);
       return (i+1);
}

void quicksort(int arr[],int low,int high)
{
  if(low<high)
	{
  int pi=partition(arr,low,high);
  quicksort(arr,low,pi-1);
  quicksort(arr,pi+1,high);
	}
}
int main()
{
	int arr[]={2,1,8,7,6,5,3,4,2,3,2,3,4,2,4,2,2,3,2,2,3,3,3,2,2,2,3,3,2,2,3,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d",arr[i]);
return 0;




}

