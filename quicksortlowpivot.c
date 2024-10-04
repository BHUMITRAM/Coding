#include<stdio.h>
void swap(int *a,int *b)
{
	int swap=*a;
	*a=*b;
	*b=swap;
}
int partition(int arr[],int low,int high)
{
	int i=low;
	int j=low+1;
	int pivot=arr[low];
	for(j;j<=high;j++)
	{
		if(arr[j]<pivot)
		{
                   i++;
		   swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i],&arr[low]);
	return i;
}
void quicksort(int arr[],int left,int right)
{
	if(left<right)
	{
		int pi=partition(arr,left,right);
		quicksort(arr,left,pi-1);
		quicksort(arr,pi+1,right);
	}
}
int main()
{

	int arr[]={2,4,1,6,8,5,9,2,2,3,5,1,1,2,1,3,2,1,5,3,2,1,1,2,3,2,3,4,22,2,2,2,2,2,2,2,2,2};
        int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	return 0;
}
