#include<stdio.h>
void swap(int *a,int *b)
{
	int swap=*a;
	*a=*b;
	*b=swap;
}
int main()
{
	int arr[]={2,1,6,5,4,3,7,8,9,2,1,4,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-1-i);j++)
				{
				  if(arr[j]>arr[j+1])
				    {
				      swap(&arr[j],&arr[j+1]);
				    }
				}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
