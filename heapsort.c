#include<stdio.h>
void swap(int *a,int *b)
{
	int swap=*a;
	*a=*b;
	*b=swap;
}
void heapify(int arr[],int n,int i)
{
	int largest=i;
	int l,r;
	l=2*i+1;
	r=2*i+2;

	if(l<n && arr[largest]<arr[l])
		largest=l;
	if (r<n && arr[largest]<arr[r])
		largest=r;
	if(i!=largest)
	{
		swap(&arr[largest],&arr[i]);
		heapify(arr,n,largest);
	}
}
void heapsort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
		heapify(arr,n,i);

	for(int i=0;i<n-1;i++)
	{
		swap(&arr[0],&arr[n-i-1]);
		heapify(arr,n-1-i,0);
	}
}
int main()
{
	int arr[]={10,8,7,15,13,12,9,14,-1,3,0,11,10,0,-1,-3,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
